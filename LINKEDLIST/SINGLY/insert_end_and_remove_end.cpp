#include<iostream>
using namespace std;

class NODE{
	public:
		char info;
		NODE* link=NULL;
};

class Linked_List{
	public:
		NODE* start=NULL;
		
		NODE* insert(char info){
			NODE* newnode=new NODE;
			if(start==NULL){
				newnode->info=info;
				start=newnode;
			}
			else{
				newnode->info=info;
				NODE* ptr=start;
				while(ptr->link != NULL){
					ptr=ptr->link;
				}
				ptr->link=newnode;
			}
			return newnode;
		}
		
		void display(){
			NODE* ptr=start;
			cout<<"\n-----LINKED LIST-----\n";
			while(ptr != NULL){
				cout<< ptr->info <<" ";
				ptr = ptr->link;
			}
		}
};

int main(){
	Linked_List l;
	
	l.insert('a');
	l.insert('b');
	l.insert('c');
	
	l.display();
	
	return 0;
}
