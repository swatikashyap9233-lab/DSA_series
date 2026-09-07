// #include<iostream>
// #include<map>
// using namespace std;

// int main() {
//     map<int,int>mp;
//     mp[5]=25;
//     mp[1]=1;
//     mp[3]=9;

//     for(auto pair:mp){
//         cout<<pair.first<<" "<<pair.second<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     int n, x;
//     cin >> n;

//     map<int, long long int> mp;

//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         mp[x] = 1LL*x * x;
//     }
//     for(auto pair:mp){
//         cout<<pair.first<<" - "<<pair.second<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <map>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     int n, x;
//     map<int, int> freq;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         freq[x]++;  
//     }
//     vector<pair<int,int>>v;

//     for(auto i:freq)
//     {
//         v.push_back(i);
//     }

//     for (auto it : freq) {
//         cout << it.first << " -> "<< endl;
//     }

//     return 0;
// }

