#include<iostream>
using namespace std;
class Demo{
    public:

    // WE CAN TAKE SAME NAMES OF FUNCTIONS WHEN WE PASS CHANGING THE ARGUMENTS
    void show(){
        cout<<"Show no value"<<endl;
    }
    void show(int a){
        cout<<"Show value: "<<a<<endl;
    }
    void show(int a, int b){
        cout<<"sum: "<<a+b;
    }

    // DEFAULT ARGUMENTS
    int add(int a=5, int b=6){      // SET ANY DEFAULT VALUE
        return a+b;
    }

};
int main(){
    Demo obj;
    // obj.show();
    // obj.show(5);
    // obj.show(5,6);

    int a,b,c;
    // c=obj.add(a,b);         // IF WE DO NOT PASS ANY VALUE THEN IT AUTOMATICALLY
                            // ADD TWO GARBAGE VALUE
    c= obj.add(10,30);               
    cout<<c;
    return 0;
}

