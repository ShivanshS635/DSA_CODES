#include<iostream>
using namespace std;
//Linear Search
//bool Search(int *arr , int size , int key) {
//	if(size == 0) return false;
//	if(arr[0] == key) return true;
//	else{
//		bool remaining = Search(arr+1 , size-1,key);
//		return remaining;
//	}
//}

//Bubble Sort
bool Search(int *arr , int start , int end , int key) {
	if(start > end) return false;
	
	int mid = start + (end - start) / 2;
	
	if(arr[mid] == key) return true;
	
	if(arr[mid] < key){
		return Search(arr , mid+1 , end , key);
	}
	else{
		return Search(arr , start , mid-1 , key);
	}
}

int main() {

    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    
    bool ans = Search(arr , 0 , 5 , 20);
    
    if(ans) cout << "Found...";
    else cout << "Not Found...";

    return 0;
}
