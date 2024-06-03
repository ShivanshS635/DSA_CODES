#include<iostream>
using namespace std;

int main()
{
	
	int b,n,l,h,m,s;
	
	cout<<"ENTER NUMBER OF BALLS:";
	cin>>b;
	
	l=1;
	h=b;
	
	while(l<=h)
	{
		m=l+((h-l)/2);
		n=m;
		s=(n*(n+1))/2;
		if(s>h)
		{
			h=m-1;
		}
		else if(s<h){
			l=m+1;
		}
		else{
			break;
		}
	}
	cout<<n<<endl;
	return 0;
}
