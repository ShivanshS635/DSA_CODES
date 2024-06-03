#include<iostream>
using namespace std;

int binary_search(int a[],int n,int item){
	int l=0;
	int h=n-1;
	int m;
	while(l<=h){
		m=l+(h-l)/2;
		if(a[m]==item){
			return m;
		}
		else if(item<a[m]){
			h=m-1;
		}
		else{
			l=m+1;
		}
	}
	return -1;
}

int main(){
	int *a,i,n,item,index;
	
	cout<<"ENTER SIZE OF ARRAY:";
	cin>>n;
	
	a=new int[n];
	
	cout<<"ENTER ELEMENTS:";
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"ENTER ELEMENT TO SEARCH:";
	cin>>item;
	
	index=binary_search(a,n,item);
	
	if(index!=-1){
		cout<<"INDEX OF "<<item<<" IS "<<index;
	}
	else{
		cout<<"NOT FOUND!!";
	}
	
	return 0;
}
