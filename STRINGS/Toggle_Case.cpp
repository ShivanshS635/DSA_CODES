#include<iostream>
using namespace std;

int main(){
	char s[100];
	int i=0; 
	
	cin.getline(s,100);
	
	while(s[i] != '\0'){
		int t=s[i];
		if(t>=65 && t<=90){
			s[i]=s[i]+32;
		}
		else if(t>=97 && t<=122){
			s[i]=s[i]-32;
		}
		cout<<s[i];
		i++;
	}
	
	return 0;
}
