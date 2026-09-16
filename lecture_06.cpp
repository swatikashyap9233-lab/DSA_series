// DECIMAL TO BINARY

#include<iostream>
using namespace std;
// int binFun(int n){
//     int ans=0;
//     int pow=1;
//     while(n>0){
//         int rem=n%2;
//         n=n/2;
//         ans+=rem*pow;
//         pow=pow*10;
//     }
//     return ans;
// }
// int main(){
//     cout<< binFun(45) <<endl;
//     return 0;
// }

// BINARY TO DECIMAL

// int binToDec(int n){
//     int ans=0;
//     int pow=1;
//     while(n>0){
//         int rem=n%10;
//         n=n/10;
//         ans+=rem*pow;
//         pow=pow*2;
//     }
//     return ans;
// }
// int main(){
//     cout<< binToDec(101101)<<endl;
//     return 0;
// }

// CONVERT -8 TO BINARY AND REVERSE

// #include <iostream>
// using namespace std;

// void binary(int n) {
//     for (int i = 7; i >= 0; i--) {
//         cout << ((n >> i) & 1);
//     }
// }

// int main() {
//     int n = -8;

//     cout << "Binary of " << n << " = ";
//     binary(n);

//     return 0;
// }