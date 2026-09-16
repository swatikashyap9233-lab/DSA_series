#include<iostream>
using namespace std;
// int main(){
// int x = 10;                      // global scope
//     for(int i=0;i<10;i++){      // local scope
//        cout<<x<<endl;           // return value
//     }
//     cout<<i<<endl;             // return error
//     cout<<x<<endl;             // return value
//     return 0;
// }

// int main(){
//     cout<<sizeof(long long)<<endl;
//     return 0;
// }

// FIGURE OUT HOW TO FIND IF A NUMBER IS POWER OF 2 WITHOUT ANY LOOP

// int power(int n){
//     int pow=1;
//     while(n>0){
//         pow=pow*2;
//         n--;
//     }
//     return pow;
// }
// int main(){
//     cout<<power(4)<<endl;
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;

//     if(n<=0){
//         cout<<"not the power of 2";
//     }

//     while(n%2==0){
//         n=n/2;
//     }
//     if(n==1){
//         cout<<"power of 2";
//     }
//     else{
//         cout<<"not the power of 2";
//     }
//     return 0;
// }

// IF A NO. IS POWER OF 2 OR NOT

// int main(){
//     int n;
//     cin>>n;
//     if(n > 0 && (n & (n - 1)) == 0){
//         cout<<"power of 2";
//     }
//     else{
//         cout<<"no";
//     }
//     return 0;
// }

// REVERSE OF A NUMBER

// int main(){
//     int n;
//     cin>>n;
//     int ans =0;
//     while(n>0){
//         int rem=n%10;
//         ans=ans*10+rem;
//         n=n/10;
//     }
//     cout<<"reverse of the number: "<<ans;
//     return 0;
// }