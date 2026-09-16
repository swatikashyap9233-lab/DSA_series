#include<iostream>
using namespace std;
class stack{
    int arr[100];
    int top;

    public:
    stack(){
        top=-1;
    }
    void push(int value,int size){
        if(top==size-1){
            cout<<"Stack is already filled"<<endl;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"inserted value: "<<arr[value]<<endl;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Deleted element is: "<<arr[top]<<endl;
            top--;
        }
    }
    void peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"The peek element is: "<<arr[top]<<endl;
        }
    }
    void display(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Stack elements are:\n ";
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    stack s;
    s.push(5,7);
    s.push(2,7);
    s.push(23,7);
    s.push(14,7);
    s.pop();
    s.peek();
    s.display();
    return 0;
}