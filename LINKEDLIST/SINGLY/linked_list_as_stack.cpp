#include<iostream>
using namespace std;

class NODE{
	public:
		char info;
		NODE* link=NULL;
};

class LinkedList{
	public:
		NODE* start=NULL;
		
		NODE* insert(char a){        //PUSH
			NODE* newnode = new NODE; 
			newnode->info = a; 
			newnode->link = start; 
			start = newnode;
			return newnode;
		}
		
		void remove(){              //POP
			if(start==NULL){
				cout<<"LINKEDLIST UNDERFLOW";
			}
			
			else{
				NODE* temp=start;
				start=start->link;
				delete temp;
			}
		}
		
		void Display(){
			NODE* ptr=start;
			cout<<"\n-----LINKED LIST-----\n";
			while(ptr != NULL){
				cout<< ptr->info <<" ";
				ptr = ptr->link;
			}
		}
};

int main(){
	
	LinkedList l;
	
	l.insert('a');
	l.insert('b');
	l.insert('c');
	
	l.Display();
	
	l.remove();
	
	l.Display();
	
	return 0;
}
