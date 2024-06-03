#include<iostream>
using namespace std;
int n;
bool Ismountainarr(int arr[],int n){
	int i,ctr=0;
	for(i=0;i<n;i++){
		ctr++;
	}
	if(ctr>=3){
		return true;
	}
	else{
		return false;
	}
}

int peak_index(int arr[],int n){
	int i,max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

int main()
{
	int *arr,n,i;
	
	cout<<"ENTER LENGTH OF ARRAY:";
	cin>>n;
	
	arr=new int[n];
	
	if(Ismountainarr(arr,n)){
		cout<<"ENTER ELEMENTS:";
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		int index=peak_index(arr,n);
		for(i=0;i<n;i++){
			if(arr[i]==index){
				cout<<i;
				break;
			}
		}
	}
	else{
		cout<<"NOT A MOUNTAIN ARRAY.";
	}
	
	return 0;
}
