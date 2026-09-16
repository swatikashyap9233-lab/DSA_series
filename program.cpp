// Program to reverse the given number using Recursion

#include<iostream>
using namespace std;

// int reverse(int n,int rev=0){

//     if(n==0){
//         return rev;
//     }

//     return reverse(n/10,rev*10+n%10);
// }

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     cout<<"Reverse of n: "<<reverse(n,0);
//     return 0;
// }

// Finding sum of the digits of the number

int sumOfTheDigits(int n,int sum=0){
    if(n==0){
        return sum;
    }
    return sumOfTheDigits(n/10,sum+n%10);
}
int main(){
    cout<<sumOfTheDigits(132)<<endl;
    cout<<sumOfTheDigits(153);
    return 0;
}