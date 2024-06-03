#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void selection_sort(int a[],int n){
	int i,j,min,temp;
	for(i=0;i<n-1;i++){
		min=a[i];
		for(j=i+1;j<n;j++){
			if(a[j]<min){
				swap(a[j],min);
			}
		}
		swap(a[i],min);
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
	
	selection_sort(a,n);
	
	cout<<'\n'<<"ARRAY AFTER SORTING:";
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
