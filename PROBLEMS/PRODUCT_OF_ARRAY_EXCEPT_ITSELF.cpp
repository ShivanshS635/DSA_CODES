#include<iostream>
using namespace std;

int main()
{
	int *a,*b,n,i=0,j=0,k=0,p=1;
	
	cout<<"ENTER NUMBER OF ELEMENTS:";
	cin>>n;
	
	a=new int[n];
	b=new int[n];
	
	cout<<"ENTER ELEMENTS:";
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(i=0,k=0;i<n;i++,k++){
		p=1;
		for(j=0;j<n;j++){
			if(k==j){
				continue;
			}
			else{
				p=p*a[j];
			}
		}
		b[i]=p;
	}
	
	for(i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	
	delete []a;
	delete []b;
	
	return 0;
}
