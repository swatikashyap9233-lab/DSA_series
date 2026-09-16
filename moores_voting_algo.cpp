#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     //pair sum
//     int n;
//     cout<<"Enter the size: ";
//     cin>>n;
//     int arr[100];
//     cout<<"Enter the array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"Enter the target: ";
//     cin>>target;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//         if(arr[i]+arr[j]==target && i!=j){
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//             break;
//         }
//     }
// }
//     return 0;
// }

vector<int> pairSum(,int n,int target){
    int i=0;
    int j=n-1;
    while(i<j){
        int pairsum=arr[i]+arr[j];
        if(pairsum>target){
            i++;
        }
        else if(pairsum<target){
            j--;
        }
        else{
            
            break;
        }
    }
}
int main(){
    int arr[]={1,3,6,5};
    cout<<pairSum(arr,4,9)<<endl;
    return 0;
}