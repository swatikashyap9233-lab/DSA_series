#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int maxSum=INT8_MIN;
//     for(int st=0;st<n;st++){
//         int currentSum=0;
//         for(int end=st;end<n;end++){
//             currentSum=currentSum+arr[end];
//             maxSum=max(currentSum,maxSum);
//         }
//     }
//     cout<<maxSum;
//     return 0;
//    }

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int currentSum=0;
    int maxSum=INT16_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        maxSum=max(currentSum,maxSum);
        if(currentSum<0){
            currentSum=0;
        }
    }
    cout<<"Max sum is: "<<maxSum;
}