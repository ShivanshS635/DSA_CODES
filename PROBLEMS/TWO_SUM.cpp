#include<iostream>
using namespace std;

int main(){
	int *a,n,i,s,*p1,*p2;
	
	cout<<"ENTER NUMBER OF ELEMENTS:";
	cin>>n;
	
	a=new int[n];
	
	cout<<"INSERT ELMENTS:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"ENTER THE SUM:";
	cin>>s;
	
	for(i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	p1=&a[0];
	p2=&a[n-1];
	
	while(p1 != p2)
	{
		int sum=*p1+*p2;
		if(sum==s)
		{
			cout<<'\n'<<*p1<<" "<<*p2;
			p1++;
		}
		else if(sum>s)
		{
			p2--;
		}
		else if(sum<s)
		{
			p1++;
		}
	}
	
	delete []a;
	return 0;
}
