#include <iostream>
#include <string>
using namespace std;

// Call by Value
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside Call by Value: " << x << endl;
}

// Call by Reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside Call by Reference: " << x << endl;
}

// Call by Address
void callByAddress(int *x)
{
    *x = *x + 10;
    cout << "Inside Call by Address: " << *x << endl;
}

int main()
{
    string name;
    int rollNo, num;

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter a Number: ";
    cin >> num;

    cout << "\n----- Student Details -----" << endl;
    cout << "Name        : " << name << endl;
    cout << "Roll Number : " << rollNo << endl;

    // Call by Value
    cout << "\nBefore Call by Value: " << num << endl;
    callByValue(num);
    cout << "After Call by Value: " << num << endl;

    // Call by Reference
    cout << "\nBefore Call by Reference: " << num << endl;
    callByReference(num);
    cout << "After Call by Reference: " << num << endl;

    // Call by Address
    cout << "\nBefore Call by Address: " << num << endl;
    callByAddress(&num);
    cout << "After Call by Address: " << num << endl;

    return 0;
}