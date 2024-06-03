#include<bits/stdc++.h>

using namespace std;

void Sort(int *arr , int n){
	if(n == 0 || n == 1) return ;
	
	for(int i = 0; i < n-1 ; i++){
		if(arr[i] > arr[i+1]){
			swap(arr[i] , arr[i+1]);
		}
	}
	
	Sort(arr , n-1);
}

int main(){
	
	int arr[10] = {1,5,7,3,8,9,10,2,4,6};
	int n= 10;
	
	Sort(arr , n);
	
	for(int i = 0 ; i<n ; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
