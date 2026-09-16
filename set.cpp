#include<iostream>
#include<set>
#include <algorithm>
using namespace std;

int main(){
    set<int>set1,set2;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set2.insert(1);
    set2.insert(2);
    set1.erase(3);
    set1.insert(set2.begin(),set2.end());
    cout<<"size of set1: "<<set1.size()<<endl;
    if(set1==set2){
        cout<<"Sets are equal"<<endl;
    }
    else{
        cout<<"Sets are not equal"<<endl;
    }
    if(includes(set1.begin(),set1.end(),set2.begin(),set2.end())){
        cout<<"set2 is the subset of set2"<<endl;
    }
    else{
        cout<<"set2 is not the subset of set1"<<endl;
    }
    int x=2;
     if(set1.count(x)) //||if(set1.find(x)!=set1.end())
{
    cout<<x<<" exist in set1"<<endl;
}
else{
    cout<<x<<"does not exist"<<endl;
}
for(int val:set1){
    cout<<val<<" ";
    return 0;
}
    }