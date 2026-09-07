// #include <iostream>
// using namespace std;

// class Student {
//     int id;
//     string name;

// public:
//     // 1. Default Constructor
//     Student() {
//         id = 0;
//         name = "Unknown";
//         cout << "Default Constructor called" << endl;
//     }

//     // 2. Parameterized Constructor
//     Student(int i, string n) {
//         id = i;
//         name = n;
//         cout << "Parameterized Constructor called" << endl;
//     }

//     // 3. Copy Constructor
//     Student(const Student &s) {
//         id = s.id;
//         name = s.name;
//         cout << "Copy Constructor called" << endl;
//     }

//     // Display function
//     void display() {
//         cout << "ID: " << id << ", Name: " << name << endl;
//     }

//     // Destructor
//     ~Student() {
//         cout << "Destructor called for " << name << endl;
//     }
// };

// int main() {

//     cout << "--- Object 1 ---" << endl;
//     Student s1;                 // Default constructor
//     s1.display();

//     cout << "\n--- Object 2 ---" << endl;

//     int id;
//     string name;

//     cout << "Enter Student ID: ";
//     cin >> id;

//     cout << "Enter Student Name: ";
//     cin >> name;

//     Student s2(id, name);       // Parameterized constructor
//     s2.display();

//     cout << "\n--- Object 3 ---" << endl;
//     Student s3 = s2;             // Copy constructor
//     s3.display();

//     cout << "\nEnd of main()" << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Student {
// private:
//     int marks;

// public:
//     Student(int s) {
//         marks = s;
//     }

//     friend void compare(Student s1, Student s2);
// };

// void compare(Student s1, Student s2) {
//     if (s1.marks > s2.marks)
//         cout << "Student 1 has higher marks";
//     else if (s2.marks > s1.marks)
//         cout << "Student 2 has higher marks";
//     else
//         cout << "Both have equal marks";
// }

// int main() {
//     Student s1(85);
//     Student s2(90);

//     compare(s1, s2);

//     return 0;
// }


#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;

    public:
    string name;

    Employee(string n,int s){
        name=n;
        salary=s;
    }

    friend void display(Employee e){
        cout<<"Name: "<<e.name<<endl;
        cout<<"Salary: "<<e.salary<<endl;
    }
}