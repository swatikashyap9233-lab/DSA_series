// Write a program to pass objects as arguments and 
// return objects from functions to perform operations
// on user defined data.

// #include <iostream>
// using namespace std;

// class Student {
//     int marks;

// public:
//     static int count;

//     Student(int m) {
//         marks = m;
//         count++;
//     }

//     friend void display(Student s);
// };

// int Student::count = 0;

// void display(Student s) {
//     cout << "Marks: " << s.marks << endl;
//     cout << "Total Students: " << Student::count << endl;
// }

// int main() {
//     Student s1(80);
//     Student s2(90);
//     Student s3(75);

//     display(s3);

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Number {
//     int a, b;

// public:
//     void getData() {
//         cout << "Enter two numbers: ";
//         cin >> a >> b;
//     }

//     Number add(Number n) {
//         Number result;
//         result.a = a + n.a;
//         result.b = b + n.b;
//         return result;
//     }

//     void display() {
//         cout << "First Sum: " << a << endl;
//         cout << "Second Sum: " << b << endl;
//     }
// };

// int main() {
//     Number n1, n2, result;

//     n1.getData();
//     n2.getData();

//     result = n1.add(n2);

//     cout << "Result:" << endl;
//     result.display();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Student {
//     int roll;
//     string name;

// public:
//     void getData() {
//         cout << "Enter Roll No and Name: ";
//         cin >> roll >> name;
//     }

//     void display() {
//         cout << "Roll No: " << roll << ", Name: " << name << endl;
//     }
// };

// int main() {
//     int n;

//     cout << "Enter number of students: ";
//     cin >> n;

//     Student *students = new Student[n];

//     for (int i = 0; i < n; i++) {
//         students[i].getData();
//     }

//     cout << "\nStudent Details:\n";

//     for (int i = 0; i < n; i++) {
//         Student *ptr = &students[i];
//         ptr->display();
//     }

//     delete[] students;

//     return 0;
// }

#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;
    int marks;

    Student(string n, int m) {
        name = n;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    unique_ptr<Student> s1 = make_unique<Student>("Rahul", 85);

    cout << "Using Unique Pointer:" << endl;
    s1->display();

    shared_ptr<Student> s2 = make_shared<Student>("Priya", 90);
    shared_ptr<Student> s3 = s2;

    cout << "\nUsing Shared Pointer:" << endl;
    s2->display();
    cout << "Reference Count: " << s2.use_count() << endl;

    return 0;
}

