#include<iostream>
using namespace std;

void merge(int a[],int b[],int c[],int m,int n){
	int i=0,j=0,k=0,p;
	while(i<m && j<n){
		if(a[i]<b[j]){
			c[k]=a[i];
			i++;
		}
		else{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	if(i==n){
		for(p=j;p<m;p++){
			c[k]=b[p];
			k++;
		}
	}
	else{
		for(p=i;p<n;p++){
			c[k]=a[p];
			k++;
		}
	}
}

int main()
{
	int *a,*b,*c,m,n,i;
	
	cout<<"ENTER NUMBER OF ELEMENTS IN FIRST ARRAY:";
	cin>>m;
	
	cout<<"ENTER NUMBER OF ELEMENTS IN SECOND ARRAY:";
	cin>>n;
	
	a=new int[m];
	b=new int[n];
	c=new int[m+n];
	
	cout<<"ENTER ELEMENTS IN FIRST ARRAY:";
	
	for(i=0;i<m;i++){
		cin>>a[i];
	}
	
	cout<<"\n-----FIRST ARRAY-----\n";
	
	for(i=0;i<m;i++){
		cout<<a[i]<<" ";
	}
	
	cout<<"\nENTER ELEMENTS IN SECOND ARRAY:";
	
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	
	cout<<"\n-----SECOND ARRAY-----\n";
	
	for(i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	
	cout<<"\n-----ARRAY AFTER MERGING-----\n";
	
	merge(a,b,c,m,n);
	
	for(i=0;i<m+n;i++){
		cout<<c[i]<<" ";
	}
	
	delete []a;
	
	return 0;
}
