// Name-Tushar Jham
// RollNo:2010992474
// Set:3
// Q2

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
//	Taking input for size of array
	cin>>n;
	int arr[n];
//  Taking input for array elements
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr[i]=x;
	}
//  Taking input for given sum
	int sum;
	cin>>sum;
	
	map<int,bool> m;
	bool b=false;
	for(int i=0;i<n;i++){
		if(m.find(arr[i])==m.end()) m[arr[i]]=true;
        // If the below if condition is true it means that we have found a pair whose sum is equal to given sum
		if(sum-arr[i]!=arr[i] && m.find(sum-arr[i])!=m.end()){
			b=true;
			cout<<sum-arr[i]<<" "<<arr[i]<<endl;
		}
	}
    // If b is false,it means there is no pair in given array whose sum is equal to given sum
	if(b==false){
		cout<<"Pair not found\n";
	}
  return 0;
}
