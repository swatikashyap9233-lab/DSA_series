#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>           //for distance();
using namespace std;
int main(){
    set<int>s={10,20,30,40};
    int x=30;
    auto it = s.find(x);
    if(it != s.end()){
        int pos=distance(s.begin(),it);
        cout<<"Position of "<<x<<" is: "<<pos<<endl;
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}