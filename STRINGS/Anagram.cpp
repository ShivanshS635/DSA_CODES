//#include<bits/stdc++.h>
//#include<strings.h>
//using namespace std;
//
//int main(){
//	string s1,s2;
//	int i;
//	
//	cin>>s1;
//	cin>>s2;
//	
//	if(s1.length() != s2.length()){
//		cout<<"This String Is Not An ANAGRAM.";
//		return 0;
//	}
//	
//	sort(s1.begin(),s1.end());
//	sort(s2.begin(),s2.end());
//	
//	for(i=0 ; i<s1.length() ; i++){
//		if(s1[i] != s2[i]){
//			cout<<"This String Is Not An ANAGRAM.";
//			return 0;
//		}
//	}
//	
//	cout<<"This String Is An ANAGRAM.";
//	return 0;
//}

#include<bits/stdc++.h>
#include<strings.h>
using namespace std;

int main(){
	string s1,s2;
	int i;
	map<char,int> mp;
	
	cin>>s1;
	cin>>s2;
	
	if(s1.length() != s2.length()){
		cout<<"This String Is Not An ANAGRAM.";
		return 0;
	}
	
	for(i=0 ; i<s1.length() ; i++){
		mp[s1[i]++];
	}
	
	for(i=0 ; i<s2.length() ; i++){
		mp[s2[i]--];
	}
	
	map<char,int>::iterator it=mp.begin();
	
	while(it != mp.end()){
		if(it -> second != 0){
			cout<<"This String Is Not An ANAGRAM.";
			return 0;
		}
		it++;
	}
	
	cout<<"This String Is An ANAGRAM.";
	
	return 0;
}
