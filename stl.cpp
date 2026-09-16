// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int>s;
//     s.push(40);
//     s.push(30);
//     s.push(29);
//     cout<<"the top element is: "<<s.top()<<endl;
//     s.pop();
//     cout<<"now the top element: "<<s.top()<<endl;
//     cout<<"the size: "<<s.size()<<endl;
//     if(s.empty()){
//         cout<<"stack is empty"<<endl;
//     }
//     else{
//         cout<<"stack is not empty"<<endl;
//     }
//     if(!s.empty()){
//         cout<<"peek element: "<<s.top()<<endl;
//     }
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int choice, value;

    do {
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Peek (Top)";
        cout << "\n4. Display";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                if (s.empty()) {
                    cout << "Stack Underflow";
                } else {
                    cout << "Deleted element: " << s.top() << endl;
                    s.pop();
                }
                break;

            case 3:
                if (s.empty()) {
                    cout << "Stack is empty";
                } else {
                    cout << "Top element: " << s.top();
                }
                break;

            case 4: 
                if (s.empty()) {
                    cout << "Stack is empty";
                } else {
                    stack<int> temp = s;  
                    cout << "Stack elements: ";
                    while (!temp.empty()) {
                        cout << temp.top() << " ";
                        temp.pop();
                    }
                }
                break;
            

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice";
        }

    } while (choice != 5);

    return 0;
}