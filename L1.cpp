#include<iostream>
#include<cstdarg>
using namespace std;

// void intrest(float amount, float rate = 8.5)
// {
//     float si;

//     si = (amount * rate) / 100;

//     cout << "Simple Interest = " << si << endl;
// }

// int main()
// {
//     intrest(10000);          
//     intrest(10000, 10.0);    

//     return 0;
// }

//Student Record System using Object-Oriented Programming
// #include<iostream>
// using namespace std;

// //Class Definition
// class studentInfo
// {
// private:
//     long long roll;
//     string name;
//     float marks;

// public:
// //Function to input student details
//     void getInfo()
//     {
//         cout << "Enter Roll no.: ";
//         cin >> roll;
//         cin.ignore();

//         cout << "Enter Name: ";
//         getline(cin, name);

//         cout << "Enter Marks: ";
//         cin >> marks;
//     }

//     void display()
//     {
//         cout << "------ STUDENT DETAILS ------"<<endl;
//         cout << " Name\t\t"     << ": " << name << endl;
//         cout <<" Roll No.\t" << ": " << roll << endl;
//         cout <<" Marks\t\t"    << ": " << marks << endl;
//     }
//     void grade(){
//         cout<<"---GRADE---"<<endl;
//         if(marks>=90){
//             cout<<"Grade: A"<<endl;
//         }
//         else if(marks>=80){
//             cout<<"Grade B"<<endl;
//         }
//         else if(marks>=70){
//             cout<<"Grade C"<<endl;
//         }
//         else if(marks>=60){
//             cout<<"Grade C"<<endl;
//         }
//         else{
//             cout<<"Below Avg";
//         }
//     }
// };

// int main()
// {
//     studentInfo s;        //Object creation
//     s.getInfo();
//     s.display();
//     s.grade();

//     return 0;
// }

// int sum(int count,...){       //... -> variable argument
//     va_list args;              // va_list ->  stores the list of argument
//     va_start(args,count);      // va_start -> initialize the argument
//     int total=0;
//     for(int i=0;i<count;i++){
//         total+=va_arg(args,int);        // va_arg -> retrieve the next argument
//     }
//     va_end(args);
//     return total;
// }
// int main(){
//     cout<<"sum: "<<sum(3,5,743,5)<<endl;
//     return 0;
// }

int main(){
    // auto a ="a";
    // auto b =2;
    // cout<< a<<" "<<b;
    int arr[4]={1,2,3,45};
    for(auto a:arr){
        cout<<a;
    }
    return 0;
}