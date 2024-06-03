#include<iostream>
using namespace std;

int main(){
	int i,n,x,*a;
	
	cout<<"ENTER NUMBER OF ELEMENTS:";
	cin>>n;
	
	a=new int[n];
	
	cout<<"ENTER ELEMENTS:";
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(i=0;i<n;i++){
		if(a[i]!=i+1){
			x=i+1;
			break;
		}
	}
	
	cout<<x;
	
	return 0;
}
