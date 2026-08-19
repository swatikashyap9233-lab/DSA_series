
#include<iostream>
#include<stack>
#include<string>
#include<cmath>
using namespace std;

int precedence(char op){
    if(op=='^')
        return 3;
    else if(op=='*' || op=='/' || op=='%')
        return 2;
    else if(op=='+' || op=='-')
        return 1;
    return 0;
}

bool isRightAssosiativity(char op){
    return (op=='^');
}

string infixToPostfix(string infix){

    stack<char> st;
    string postfix="";

    for(int i=0;i<infix.length();i++){

        char ch=infix[i];

        if(ch==' ')
            continue;

        if((ch>='A'&&ch<='Z') ||
           (ch>='a'&&ch<='z') ||
           (ch>='0'&&ch<='9')){

            postfix += ch;
        }

        else if(ch=='('){
            st.push(ch);
        }

        else if(ch==')'){

            while(!st.empty() && st.top()!='('){
                postfix += st.top();
                st.pop();
            }

            if(!st.empty())
                st.pop();
        }

        else{

            while(!st.empty() && st.top()!='(' &&
                 (precedence(st.top()) > precedence(ch) ||
                 (precedence(st.top()) == precedence(ch) &&
                  !isRightAssosiativity(ch)))){

                postfix += st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    while(!st.empty()){
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int evaluatePostfix(string postfix){
    stack<int>st;
    for(int i=0;i<postfix.length();i++){
        char ch=postfix[i];
    }
    if(ch>='0' && ch<='9'){
        st.push(ch='0');
    }
}

int main(){

    string infix;

    cout<<"Enter infix Expression: ";
    cin>>infix;

    cout<<"Postfix: "<<infixToPostfix(infix);

    return 0;
}