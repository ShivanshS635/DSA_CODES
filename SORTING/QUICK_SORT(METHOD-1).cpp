#include<bits/stdc++.h>
using namespace std ;

int partition(int a[],int beg,int end){
	int temp,l=beg,loc=beg,r=end;
	while(l != r){
		while(1){
			if(a[r]>a[loc]){
				r--;
			}
			else{
				temp=a[loc];
				a[loc]=a[r];
				a[r]=temp;
				loc=r;
				break;
			}
		}
		while(1){
			if(a[l] < a[loc]){
				l++;
			}
			else{
				temp=a[loc];
				a[loc]=a[l];
				a[l]=temp;
				loc=l;
				break;
			}
		}
	}
	return loc;
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
