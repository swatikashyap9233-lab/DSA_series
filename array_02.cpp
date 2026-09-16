// #include<bits/stdc++.h>
// using namespace std;
// void revArr(int arr[], int n){
//     int i = 0;
//     int j = n-1;
//         while(i<j){
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//             i++;
//             j--;
//     }
    
// }
// int main() {
//     int arr[] = {24, 456, 1, 87};
//     revArr(arr,4);
//     for(int i=0; i<4;i++){
//         cout << arr[i] << endl;
//     }
//     return 0;

// }

#include <bits/stdc++.h>
using namespace std;

void revArr(int arr[], int n) {
    int i = 0;
    int j = n - 1;

    while (i < j) {
        swap(arr[i],arr[j]);
        // int temp = arr[i];
        // arr[i] = arr[j];
        // arr[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int arr[] = {24, 456, 1, 87};

    revArr(arr, 4);

    for (int i = 0; i < 4; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
