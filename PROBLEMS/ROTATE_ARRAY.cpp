#include<iostream>
using namespace std;

int main()
{
	int n,*a,i,j,k;
	
	cout<<"ENTER NUMBER OF ELEMENTS:";
	cin>>n;
	
	a=new int[n];
	
	cout<<"ENTER ELEMENTS:";
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"ENTER INDEX FROM WHICH TO ROTATE:";
	cin>>k;
	
	for(i=1;i<=k;i++){
		int temp=a[n-1];
		for(j=n-2;j>=0;j--){
			a[j+1]=a[j];
		}
		a[0]=temp;
	}
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
