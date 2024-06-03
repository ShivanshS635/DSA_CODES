#include<iostream>
using namespace std;

void insertion_sort(int a[],int n){
	int p,k,temp;
	for(k=1;k<n;k++){
		temp=a[k];
		p=k-1;
		while(a[p]>temp && p!=-1){
			a[p+1]=a[p];
			p--;
		}
		a[p+1]=temp;
	}
}

int main()
{
	int *a,n,i;
	
	cout<<"ENTER NUMBER OF ELEMENTS:";
	cin>>n;
	
	a=new int[n];
	
	cout<<"ENTER ELEMENTS:";
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"-----Array Before Sorting-----\n";
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	insertion_sort(a,n);
	
	cout<<"\n-----Array After Sorting-----\n";
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	delete []a;
	
	return 0;
}
