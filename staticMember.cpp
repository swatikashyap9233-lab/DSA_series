#include<iostream>
using namespace std;

// class Student{
//     public:
//     static int totalStudent;          // declaration only
    
//     Student(){
//         totalStudent++;               // shared counter increases for every object created
//     }
// };

// // static member must be defined outside the class
// // otherwise you get a linker error :"undefined reference"
// int Student :: totalStudent=0;

// int main(){
//     Student s1,s2,s3;
//     cout<<"Total students: "<<Student::totalStudent<<endl;

//     // output: Total number of students count.......
     
//     return 0;
// }

// class Student{
//     public:
//     static int totalstudents;

//     static void showCount(){
//         cout<<"Count: "<<totalstudents<<endl;
//         // Cannot access non-static memeber here
//     }
// };
// int Student::totalstudents=0;

// int main(){
//     Student::showCount();             // collect without any object
// }

// class Employee{
//     static int aliveCount;                // shared counter across all objects
//     public:
//     Employee(){
//         aliveCount++;
//         cout<<"Employee created. Currently alive: "<<aliveCount<<endl;
//     }
//     ~Employee(){
//         aliveCount--;
//         cout<<"Employee destroyed. Currently alive: "<<aliveCount<<endl;
//     }
// };

// int Employee::aliveCount=0;       // static memeber definition, outside the class

// int main(){
//     Employee e1;             // count=-1
//     {
//         Employee e2;         // count =2
//         Employee e3;         // count =3
//     }  // e2 and e3 destroyed here -> count back to 1

//     cout<<"Back to main()"<<endl;
// // e1 destroyed here -> count =0
// }

class Student{
    static int rollNo;
    public:
    string name;
    int marks;
    Student(string n,int m){
        name=n;
        marks=m;
        rollNo++;
    }
void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll: "<<rollNo<<endl;
    cout<<"Marks: "<<marks<<endl;
}
};
int Student::rollNo=242442;

int main(){
    Student s1("dfd",23);
    Student s2("abc",89);
    s1.display();
    s2.display();
}