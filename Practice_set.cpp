#include<iostream>
#include<vector>
using namespace std;
// prime number
// int main(){
//     int n;
//     cout<<"Enter any number: ";
//     cin>>n;
//     bool isprime=true;
//     if(n<=1){
//         cout<<"Not prime";
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             isprime=false;
//             break;
//         }
//     }
//     if(isprime){
//         cout<<"prime no.";
//     }
//     else{
//         cout<<"not prime";
//     }
//     return 0;
// }

// intersection of two array
// int intersectionOfArray(int arr1[],int n1,int arr2[],int n2){
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<< arr1[i]<<" ";
//             }
//         }
//     }
// }
// int main(){
//     int arr1[]={1,82,31,4,5};
//     int arr2[]={3,4,7,82};
//     intersectionOfArray(arr1,5,arr2,4);
//     return 0;
// }

// print all unique no. in an array
// void printUniqueNumber(int arr[],int n){
    
//     for(int i=0;i<n;i++){
//         bool isUnique=true;
//         for(int j=0;j<n;j++){
//             if(i!=j && arr[i]==arr[j]){
//                 isUnique=false;
//                 break;
//             }
//         }
//         if(isUnique){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,2,1,3,7,9,2};
//     printUniqueNumber(arr,8);
//     return 0;
// }

// 2^n

// int powerOfTwo(int n){
//     int ans=1;
//     for(int i=0;i<n;i++){
//         ans=2*ans;
//     }
//     return ans;
// }
// int main(){
//     cout<<powerOfTwo(6);
//     return 0;
// }

// figire out whether a number is power of two

// int main(){
//     int n;
//     cout<<"Enter any number: ";
//     cin>>n;
//     while(n%2==0){
//         n=n/2; 
//     }
//     if(n==1){
//         cout<<"power of 2";
//     }
//     else{
//         cout<<"not power of 2";
//     }
//     return 0;
// }

// without loop

// int main(){
//     int n;
//     cout<<"Enter any number: ";
//     cin>>n;
//     if(n>0 && (n & (n-1)) == 0){
//         cout<<"Power of 2";
//     }
//     else{
//         cout<<"Not power of 2";
//     }
//     return 0;
// }

vector<int> pairSums(vector<int> nums,int target){
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
};
int main(){
    vector<int>nums={1,3,6,7};
    int target=9;
    vector<int>ans=pairSums(nums,target);
    cout<<ans[0]<<","<<ans[1];
    return 0;
}