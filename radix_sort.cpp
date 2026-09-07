#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;

    int arr[100];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // find max
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    // radix sort
    for(int place = 1; max/place > 0; place = place * 10){

        int op[100];
        int count[10] = {0};

        // count digits
        for(int i=0;i<n;i++){
            int digit = (arr[i]/place)%10;
            count[digit]++;
        }

        // cumulative sum
        for(int i=1;i<10;i++){
            count[i] = count[i] + count[i-1];
        }

        // place elements
        for(int i=n-1;i>=0;i--){
            int digit = (arr[i]/place)%10;
            op[count[digit]-1] = arr[i];
            count[digit]--;
        }

        // copy back
        for(int i=0;i<n;i++){
            arr[i] = op[i];
        }
    }

    // print sorted array
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// total maximum=k digits
//no. of elements in array=n
// TIME COMPLEXITY: O(n*k)
//SPACE COMPLEXITY: O(n+k)