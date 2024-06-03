#include<iostream>
using namespace std;

int main(){
	char s[100];
	int i,alpha;
	
	cin.getline(s,100);
	
	for(alpha=97 ; alpha<=122 ; alpha++){
		int f=0;
		for(i=0 ; s[i] != '\0' ; i++){
			if(s[i] == alpha){
				f=1;
				break;
			}
		}
		if(f == 0){
			cout<<"Not A PAN String.";
			return 0;
		}
	}
	cout<<"PAN String.";
	
	return 0;
}
