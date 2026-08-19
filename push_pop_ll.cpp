#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

class Stack {
    Node *top;

public:
    Stack() {
        top = NULL;
    }

    void push(int value) {
        Node *newnode = new Node();
        newnode->data = value;

        if (top == NULL) {
            newnode->next = NULL;
        }
        else {
            newnode->next = top;
        }

        top = newnode;
        cout << "Inserted Successfully" << endl;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow" << endl;
        }
        else {
            Node *ptr = top;
            cout << "Deleted element: " << top->data << endl;
            top = top->next;
            delete ptr;
        }
    }

    void peek() {
        if (top == NULL) {
            cout << "Stack is Empty" << endl;
        }
        else {
            cout << "Top element: " << top->data << endl;
        }
    }

    void display() {
        if (top == NULL) {
            cout << "Stack is Empty" << endl;
            return;
        }

        Node *temp = top;
        cout << "Stack elements are: ";

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    s.peek();

    return 0;
}