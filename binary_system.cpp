// decimal to binary

// #include <iostream>
// using namespace std;
// int decNum(int n){
//     int ans = 0;
//     int digit;
//     int pow = 1;
//     while(n>0){
//         digit = n%2;
//         n = n/2;
//         ans += (digit * pow);
//         pow *= 10;
//     }
//     return ans;
// }
// int main() {
//     cout << decNum(5) << endl;
//     return 0;
// }

// binary to decimal

// #include <iostream>
// using namespace std;
// int binNum(int n){
//     int ans = 0;
//     int pow = 1;
//     int rem;
//     while(n>0){
//         rem = n % 10;
//         ans += (rem * pow);
//         n = n/10;
//         pow *= 2;
//     }
//     return ans;
// }
// int main(){
//     cout << binNum(101) << endl;
//     return 0;
// }

// to reverse an integer
// #include <iostream>
// using namespace std;
// int rev(int n){
//     int rev = 0;
//     while (n>0){
//         int rem = n % 10;
//         rev = rem + rev*10;
//         n = n / 10;
//     }
//     return rev;
// }
// int main(){
//     cout << rev(123) <<endl;
//     return 0; 
// }