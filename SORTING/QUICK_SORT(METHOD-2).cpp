#include<bits/stdc++.h>
using namespace std ;

int partition(int a[],int l,int h){
	int i,j;
	i=l-1;
	for(j=l;j<h;j++){
		if(a[j]<a[h]){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[h]);
	return i+1;
}

void quick_sort(int a[],int l,int h){
	if(l<h){
		int loc=partition(a,l,h);
		quick_sort(a,l,loc-1);
		quick_sort(a,loc+1,h);
	}
}

int main(){
	int n,l,h;
	
	cout<<"ENTER NUMBER OF ELEMENTS IN ARRAY:";
	cin>>n;
	
	int *a=new int[n];
	
	cout<<"ENTER ELEMENTS:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"-----ARRAY BEFORE SORTING-----\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	quick_sort(a,0,n-1);
	
	cout<<"-----ARRAY AFTER SORTING-----\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return  0;
}
