// #include<iostream>
// #include<vector>
// #include<set>
// #include <algorithm>
// using namespace std;

// int main(){
//     set<int> A = {1,2,3};
//     set<int> B = {2,3,4};

//     vector<int>res;

//     //Union
//     set_union(A.begin(),A.end(),B.begin(),B.end(),back_inserter(res));
//     cout<<"Union: ";
//     for(int x:res){
//         cout<<x<<" ";
//     }
//         cout<<endl;

//         res.clear();

//         //intersection
//         set_intersection(A.begin(),A.end(),B.begin(),B.end(),back_inserter(res));
//         cout<<"Difference (A-B): ";
//         for(int x:res){
//             cout<<x<<" ";
//         }
//         cout<<endl;
//         }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n;
// 	cin>>n;
// 	cout<<"The number of elements: ";
// 	set<int>s;
	
// 	int x;
// 	for(int i=0;i<n;i++){
// 	    cin>>x;
// 	    s.insert(x);
// 	}for(int num: s){
// 	    cout<<num<<" ";
// 	}
// 	cout<<endl;
// 	cout<<s.size();
// 	return 0;

// }
#include<bits/stdc++.h>
using namespace std;
// int main(){
// 	set<char>s1;
// 	set<char>s2;
// 	int n;
// 	cout<<"Enter no. of elements in set1: ";
// 	cin>>n;
// 	int m;
// 	cout<<"	Enter no. of elements in set2: ";
// 	cin>>m;

// 	for(int i=0;i<n;i++){
// 		char x;
// 		cin>>x;
// 		s1.insert(x);
// 	}
// 	for(int i=0;i<m;i++){
// 		char x;
// 		cin>>x;
// 		s2.insert(x);
// 	}
// 	set<char>newSet;
// 	set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(newSet,newSet.begin()));
// 	cout<<"The resultant is: ";
// 	for( char c:newSet){
// 		cout<< c;
// 	}
// 	return 0;
// }

int main(){
	set<int>s1;
	set<int>s2;
	int n;
	cout<<"Number of elements in first array: ";
	cin>>n;

	int m;
	cout<<"Number of elements in second array: ";
	cin>>m;

	cout<<"Elements in set1: ";
	for(int i=0;i<n;i++){
		int x;;
		cin>>x;
		s1.insert(x);
	}

	cout<<"Elemets in set2: ";

	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		s2.insert(x);
	}
	set<int>p;
	set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(p,p.begin()));
	for(int x :p){
		cout<<"p is: "<<x;
	}
	set<int>q;
	set_difference(s2.begin(),s2.end(),s1.begin(),s1.end(),inserter(q,q.begin()));
	for(int y :q){
		cout<<"q is: "<<y;
	}

	return 0;
	
}