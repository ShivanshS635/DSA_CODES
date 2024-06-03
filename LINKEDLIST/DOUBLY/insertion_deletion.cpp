#include<iostream>
using namespace std;

class NODE{
	public:
		int data;
		NODE* prev;
		NODE* next;
};

class doubly_linked_list{
	public:
		NODE* start = NULL;
		NODE* end = NULL;
		NODE* newnode;
		
		NODE* create_node(int data){
			newnode = new NODE;
			newnode->data = data;
			newnode->next = NULL;
			newnode->prev = NULL;
			
			return newnode;
		}
		
		void insert_beg(){
			if(start == NULL){
				start = newnode;
				end = newnode;
			}
			else{
				newnode->next = start;
				start->prev = newnode;
				start = newnode;
			}
		}
		
		void insert_end(){
			if(start == NULL){
				start = newnode;
				end = newnode;
			}
			else{
				newnode->prev = end;
				end->next = newnode;
				end = newnode;
			}
		}
		
		void insert(){
			if(start == NULL){
				start = newnode;
				end = newnode;
			}
			if(newnode->data < start->data){
				this->insert_beg();
				return;
			}
			else if(newnode->data > end->data){
				this->insert_end();
				return;
			}
			else{
				NODE* ptr = start;
				while(ptr->data < newnode->data){
					ptr = ptr->next;
				}
				newnode->next = ptr;
				newnode->prev = ptr->prev;
				ptr->prev->next = newnode;
				ptr->prev = newnode;
			}
		}
		
		void remove(int item){
			NODE* temp;
			if(start == NULL){
				cout << "Underflow...";
				return;
			}
			if(start->data == item){
				if(start == end){
					start = NULL;
					end = NULL;
				}
				else{
					temp = start;
					start  = temp->next;
					start->prev = NULL;
				}
				delete temp;
			}			
			else if(end->data == item){
				if(start == end){
					start = NULL;
					end = NULL;
				}
				else{
					temp = end;
					end = end->prev; 
					end->next = NULL;
				}
				
				delete temp;
			}
			else{
				NODE* ptr = start;
				while(ptr != NULL){
					if(ptr->data == item){
						break;
					}
					ptr = ptr->next;
				}
				if(ptr == NULL){
					cout << "Item Not Found...";
					return ;
				}
				ptr->prev->next=ptr->next;
				ptr->next->prev=ptr->prev;
				delete ptr;
			}
		}
		
		void display(){
			NODE* ptr = start;
			while(ptr != NULL){
				cout << ptr->data << " ";
				ptr = ptr->next;
			}
		}
};

int main(){
	
	doubly_linked_list dl;
	
	dl.create_node(10);
	dl.insert_beg();
	
	dl.create_node(20);
	dl.insert_beg();
	
	dl.create_node(30);
	dl.insert_beg();
	
	dl.create_node(40);
	dl.insert_end();
	
	dl.create_node(50);
	dl.insert_end();
	
	dl.create_node(25);
	dl.insert();
	
	dl.create_node(5);
	dl.insert();
	
	dl.create_node(60);
	dl.insert();
	
	dl.create_node(45);
	dl.insert();
	
	dl.create_node(70);
	dl.insert();
	
	dl.display();
	cout << endl;
	
	dl.remove(45);
	dl.remove(5);
	dl.remove(25);
	dl.remove(70);
	dl.remove(60);
	
	dl.display();
	
	return 0;
}
