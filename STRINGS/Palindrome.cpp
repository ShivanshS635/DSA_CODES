#include<iostream>
using namespace std;

int main(){
	char s[100];
	int i=0,f=1,len=0;
	
	cin.getline(s,100);
	
	while(s[len] != '\0'){
		len++;
	}
	
	char temp[100];
	int j=0;
	
	for(i=len-1 ; i>=0 ;i--,j++){
		temp[j] = s[i];
	}
	
	
	for(i=0;i<len;i++){
		if((s[i] == temp[i])){
			f=1;
		}
		else{
			f=0;
			break;
		}
	}
	
	if(f==1){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not A Palindrome";
	}
	
	return 0;
}
