#include<iostream>
using namespace std;

class Student{
    private:
    int roll;

    public:
    void setRoll(int roll){
        this->roll = roll;
    }
    void display(){
        cout<<"Roll No.: "<<this->roll<<endl;
    }
};

int main(){
    Student s;

    s.setRoll(10);
    s.display();

    return 0;
}