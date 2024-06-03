#include<iostream>
using namespace std;

//bool isSorted(int *arr , int size) {
//	if(size == 0 || size == 1) return true;
//	
//	if(arr[0] > arr[1]) return false;
//	else{
//		bool ans = isSorted(arr+1 , size-1);
//		return ans;
//	}
//}

int Sum(int *arr , int size) {
	if(size == 0) return 0;
	
	int sum = sum + arr[0] + Sum(arr+1 , size-1);
	return sum;
}

int main() {

    int arr[5] = {20,20,9};
    int size = 5;
    
    int ans = Sum(arr , size);
    cout << ans;

//    bool ans = isSorted(arr, size);
//
//    if(ans){
//        cout << "Array is sorted " << endl;
//    }
//    else {
//        cout << "Array is not sorted " << endl;
//    }

    return 0;
}
