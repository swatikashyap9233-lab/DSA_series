#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the elements: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"Enter the array: ";
        cin>>arr[i];
    }

    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int bucket[10][100];
    int count[10]={0};
    for(int i=0;i<n;i++){
        
    }
}