#include<iostream>
using namespace std;

// MAX NUMBER AMONG THE ARRAY

// int main(){
//     int n;
//     cout<<"size of the array we want: ";
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxIndex=arr[0];
//     for(int i=0;i<n;i++){
//         // if(arr[i]>maxIndex){
//         //     maxIndex=arr[i];
//         // }

//         maxIndex=max(arr[i],maxIndex);
//     }

//     int maxIndex ={0};
//     for(int i=1;i<n;i++){
//         if(arr[i]>maxIndex){
//             maxIndex=arr[i];
//         }
//     }
//     cout<<"max value is: "<<maxIndex<<endl;
//     return 0;
// }

// LINEAR SEARCH

// int linearS(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     cout<<linearS(arr,7,5)<<endl;;
//     return 0;
// }

// REVERSE AN ARRAY

// {3,5,2,6,7}
// int main(){
//     int size;
//     cout<<"enter the size: ";
//     cin>>size;
//     int arr[100];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<size/2;i++){
//         int temp=arr[i];
//         arr[i]=arr[size-i-1];
//         arr[size-i-1]=temp;
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// REVERSE AN ARRAY USING FUNCTIONS

// void rev(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[]={1,4,5,2,6};
//     rev(arr,5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// CALCULATE SUM AND PRODUCT OF ALL NUMBERS OF AN ARRAY

// int sumProduct(int arr[],int n){
    // int sum=0;
    // int product=1;
    // for(int i=0;i<n;i++){
    //     sum=sum+arr[i];
    // }
    // return sum;
//     for(int i=0;i<n;i++){
//         product=product*arr[i];
//     }
//     return product;
    
// }
// int main(){
//     int arr[]={1,2,3,4};
//     cout<<sumProduct(arr,4)<<endl;
//     return 0;
// }

// SWAP THE MAX AND MIN NUMBER OF AN ARRAY


//     void swapMaxMin(int arr[],int n){
//     int minIndex={0};
//     for(int i=0;i<n;i++){
//         if(arr[i]<arr[minIndex]){
//             minIndex=i;
//         }
//     }
//     int maxIndex={0};
//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[maxIndex]){
//             maxIndex=i;
//         }
//     }
//     int temp=arr[minIndex];
//     arr[minIndex]=arr[maxIndex];
//     arr[maxIndex]=temp;
// }
// int main(){
//     int arr[]={5,2,6,8,4};
//     swapMaxMin(arr,5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
//     }

// PRINT ALL THE UNIQUE NUMBERS IN AN ARRAY

// void printuniqueNumber(int arr[],int n){
//     for(int i=0;i<n;i++){
//         bool isunique= true;
//         for(int j=0;j<n;j++){
//             if(i!=j && arr[i]==arr[j]){
//                 isunique=false;
//                 break;
//             }
//         }
//         if(isunique){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,2,1,5,6};
//     printuniqueNumber(arr,6);
//     return 0;
// }

// PRINT INTERSECTION OF TWO ARRAY

// int main(){
//     int n1;
//     cout<<"size of arr1: ";
//     cin>>n1;
//     int arr1[100];
//     for(int i=0;i<n1;i++){
//         cin>>arr1[i];
//     }
    
//     int n2;
//     cout<<"size of arr2: ";
//     cin>>n2;
//     int arr2[100];
//     for(int i=0;i<n2;i++){
//         cin>>arr2[i];
//     }

//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(arr1[i]=arr2[j]){
//                 cout<<arr1[i]<<" ";
//                 break;
//             }
//         }
//     }
//     return 0;
// }