// factorial of n

#include<iostream>
using namespace std;
// int factorial(int n){
//     int fac=1;

//     for(int i=1;i<=n;i++){
//         fac*=i;
//     }
//     return fac;
// }

// int main(){
//     cout<<"factorial is: "<<factorial(4)<<endl;
//     return 0;
// }


// int SumOfDigits(int n){
//     int sum=0;
//     while(n>0){
//         sum=sum+n%10;
//         n/=10;
//     }
//     return sum;
// }
// int main(){
//     cout<<SumOfDigits(145)<<endl;
//     cout<<SumOfDigits(1235)<<endl;
//     return 0;
// }

// binomial coffecient 

// int factorial(int n){
//     int fac=1;
//     for(int i=1;i<=n;i++){
//         fac*=i;
//     }

//     return fac;
// }

// int nCr(int n,int r){
//     int fac_n=factorial(n);
//     int fac_r=factorial(r);
//     int fac_nmr=factorial(n-r);

//     return fac_n / (fac_r * fac_nmr); 
// }

// int main(){
//     cout<<"bin coff is: "<<nCr(5,2);
//     return 0;
// }

// prime or not

// bool prime(int n){
//     if(n<=1){
//         return false;
//     }

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     if(prime(5)){
//         cout<<"Prime\n";
//     }
//     else{
//         cout<<"Not Prime\n";
//     }
//     return 0;
// }

// To print all prime no. from 1 to n

// int prime(int n){
//     for(int i=2;i<n;i++){
//         while(n%i!=0){
//             int val = i;
//             i++;
//         }
//     }
// }

// int main(){
//     cout<<prime(5)<<endl;
//     return 0;
// }

// Fibonacci series

// int fib(int n){
//     int a=0,b=1;
//     for(int i=0;i<=n;i++){
//         cout<<a<<" ";
//         int next=a+b;
//         a=b;
//         b=next;
//     }
// }
// int main(){
//     cout<<fib(5)<<endl;
//     return 0;
// }