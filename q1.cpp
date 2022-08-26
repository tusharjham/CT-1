// Name-Tushar Jham
// RollNo:2010992474
// Set:3
// Q1

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
	for(int i=1;i<n;i+=2){
//		Checking Element with its left element
		if(arr[i]<arr[i-1]){
			int temp=arr[i];
			arr[i]=arr[i-1];
			arr[i-1]=temp;
		}
//		If its the last element of array we can search for its right element
		if(i==n-1) continue;
//		Checking Element with its left element
		if(arr[i]<arr[i+1]){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
  return 0;
}

