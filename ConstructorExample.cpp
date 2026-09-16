#include<iostream>
using namespace std;
class student{
    int id;
    public:
    student():id(0) {}

    // default
    student(int x):id(x){}
    // parameterized
    student(const student& s): id(s.id){}
    // copy
    void display(){
        cout<<id<<endl;
    }
};

int main(){
    student s1;        
    student s2(101);   
    student s3(s2);   
    
    s1.display();
    s2.display();
    s3.display();

    return 0;
}