//     *
//    * *
//   *   *
//  *     *


#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        // Leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // First star
        cout << "*";

        // Don't print second star in first row
        if (i != 0) {

            // Middle spaces
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }

            // Second star
            cout << "*";
        }

        cout << endl;
    }
    for(int i=0;i<(n-1);i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=(n-2)){
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}