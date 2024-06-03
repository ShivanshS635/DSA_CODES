#include<iostream>
using namespace std;

int main()
{
	int num,max,sum,n,i,j,k,*a;
	
	cout<<"ENTER NUMBER OF ELEMENTS:";
	cin>>n;
	
	a=new int[n];
	
	cout<<"ENTER ELEMENTS:";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"UPTO WHICH INDEX YOU WANT TO PRINT SUBARRAY:";
	cin>>num;
	
	max=a[0];
	
	for(i=0;i<=num;i++){
		for(j=i;j<=num;j++){
			sum=0;
			cout<<endl;
			
			for(k=i;k<=j;k++){
				cout<<a[k];
				sum+=a[k];
			}
			if(sum>max)
			{
				max=sum;
			}
			
		}
	}
	cout<<max;
	return 0;
}
