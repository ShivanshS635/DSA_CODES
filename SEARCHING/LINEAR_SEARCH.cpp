#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int item){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==item){
			return i;
		}
	}
	return -1;
}

int main()
{
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
	
	index=linear_search(a,n,item);
	
	if(index!=-1){
		cout<<"INDEX OF "<<item<<" IS "<<index;
	}
	else{
		cout<<"NOT FOUND!!";
	}
	
	return 0;
}
