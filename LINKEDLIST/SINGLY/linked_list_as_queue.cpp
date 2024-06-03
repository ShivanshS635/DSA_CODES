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
		
		NODE* enqueue(char info){
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
		
		void dequeue(){
			NODE* temp;
			NODE* pre;
			if(start == NULL){
				cout<<"LINKED LIST UNDERFLOW";
				return;
			}
			if(start->link==NULL){
				temp=start;
				start=NULL;
			}
			else{
				NODE* ptr=start;
				while(ptr->link != NULL){
					pre=ptr;
					ptr=ptr->link;
				}
				temp=ptr;
				pre->link=NULL;
			}
			delete temp;
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
	
	l.enqueue('a');
	l.enqueue('b');
	l.enqueue('c');
	
	l.display();
	
	l.dequeue();
	
	l.display();
	
	l.dequeue();
	
	l.display();
	
	l.dequeue();
	
	l.display();
	
	l.dequeue();
	
	return 0;
}
