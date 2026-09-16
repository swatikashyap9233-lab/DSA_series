#include<iostream>
using namespace std;
// class student{
//     private:
//     int id;
//     // void show(){cout<<id;}
//     public:
//     void setter(int val){
//         id=val;
//     }
//     int getter(){
//         return id;
//     }
// };

// int main(){
//     student s;
//     s.setter(10);
//     s.getter();
//     // s.show();
//     return 0;
// }

// Definition member functions inside the class
class rectangle{
    int length,width;
    public:
    void set(int l,int w){
        length=l;
        width=w;
    }
    int area(){
        return length*width;
    }
};
int main(){
    rectangle r;
    r.set(10,5);
    cout<<r.area();
    return 0;
}