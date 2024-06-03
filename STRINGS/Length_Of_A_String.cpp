#include<iostream>
using namespace std;

int main(){
	char name[50];
	int i=0;
	
	cin.getline(name,50);
	
	while(name[i] != '\0'){
		i++;
	}
	
	cout<<"Length Of String :"<<i;
	
	return 0;
}
