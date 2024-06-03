#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void bubble_sort(int arr[],int n){
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	
	int *a,i,n,item,index;
	
	cout<<"ENTER SIZE OF ARRAY:";
	cin>>n;
	
	a=new int[n];
	
	cout<<"ENTER ELEMENTS:";
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"ARRAY BEFORE SORTING:";
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	bubble_sort(a,n);
	
	cout<<'\n'<<"ARRAY AFTER SORTING:";
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
