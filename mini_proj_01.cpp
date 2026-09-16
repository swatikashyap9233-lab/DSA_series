#include<iostream>
using namespace std;

class Bank{
    private:

    // private nested class
    class Account{
        private:
        int accountNumber;
        double balance;

        public:

        // Default constructor
        Account(){
            accountNumber=0;
            balance=0;
        }

        // Parameterized constructor
        Account(int number , double amount){
            accountNumber=number;
            balance=amount;
        }

        // Deposite method
        void deposite(double amount){
            if(amount>0){
                balance=balance+amount;
                cout<<"Amount deposited successfully"<<endl;
                cout<<"Updated balance"<<endl;
            }
            else{
                cout<<"Invalid depositr amount"<<endl;
            }
        }

        // Withdraw method
        void withdraw(double amount){
            if(amount<0){
                cout<<"Invalid syntax"<<endl;
            }
            else if(amount>balance){
                cout<<"Insufficient balance"<<endl;
            }
            else{
                balance=balance-amount;
                cout<<"Amount withdrawn successfully"<<endl;
                cout<<"Updated balance"<<endl;
            }
        }

        // Display Acoount details
        void showAccount(){
            cout<<"\nAccount number: "<<accountNumber<<endl;
            cout<<"Balance: "<<balance<<endl;
        }

        // Return Account number
        int getAccountNumber(){
            return accountNumber;
        }
    };
    public:
    // Object Array of nested class
    Account accounts[4];

    //Create account
    void createAccount(){
        accounts[0]=Account(101,50000);
        accounts[1]=Account(102,30000);
        accounts[2]=Account(103,45000);
        accounts[3]=Account(104,20000);
    }

    // Find account
    int findAccount(int number){
        for(int i=0;i<4;i++){
            if(accounts[i].getAccountNumber()==number){
                return i;
            }
        }
        return -1;
    }
    
    // Display All Accounts
    void showAllAcoounts(){
        cout<<"\n------All Accounts-------\n";

        for(int i=0;i<4;i++){
            accounts[i].showAccount();
        }
    }

    // Deposite
    void depositeMoney(){
        int number;
        double amount;

        cout<<"\nEnter Account number:";
        cin>>number;

        int index=findAccount(number);

        if(index != -1){
            cout<<"Enter deposite amount: ";
            cin>>amount;

            accounts[index].deposite(amount);
        }
        else{
            cout<<"Account not found\n";
        }
    }
    void withdrawMoney(){
        int number;
        double amount;

        cout<<"\nEnter Account number: ";
        cin>>number;

        int index=findAccount(number);

        if(index != -1){
            cout<<"Enter withdraw amount: ";
            cin>>amount;

            accounts[index].withdraw(amount);
        }
        else{
            cout<<"Account not Founr.\n";
        }
    }

    // Show particular Account
    void showParticularAccount(){
        int number;

        cout<<"\nAccount Number: ";
        cin>>number;

        int index = findAccount(number);

        if(index != -1){
            accounts[index].showAccount();
        }
        else{
            cout<<"Account not found.\n";
        }
    }
};

int main(){
    Bank bank;
    bank.createAccount();

    int choice;

    do{
        cout<<"\n\n======BANK MENU======\n";
        cout<<"1.Show all Accounts"<<endl;
        cout<<"2.Show particular account"<<endl;
        cout<<"3.Deposit money"<<endl;
        cout<<"4.Withdraw money"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"==================================="<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice)
        {
            case 1:
            bank.showAllAcoounts();
            break;

            case 2:
            bank.showParticularAccount();
            break;

            case 3:
            bank.depositeMoney();
            break;

            case 4:
            bank.withdrawMoney();
            break;

            case 5:
            cout<<"Exit";
            break;
        
        default:
            cout<<"Invalid choice, Try Again!"<<endl;
        }
    }
    while (choice !=5);
    return 0;
    
}