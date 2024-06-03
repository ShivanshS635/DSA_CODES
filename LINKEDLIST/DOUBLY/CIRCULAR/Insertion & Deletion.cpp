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
		NODE* newnode;
		NODE* end = NULL;
		
		NODE*  create_node(int data){
			newnode = new NODE;
			newnode->data = data;
			newnode->prev = NULL;
			newnode->next = NULL;
			
			return newnode;
		}
		
		void insert_beg(){    
			if(start == NULL){
				start = newnode;
				end = newnode;
				newnode->next=start;
				newnode->prev=end;
			}
			else{
				newnode->next = start;
				start->prev = newnode;
				start = newnode;
				newnode->prev = end;
				end->next = newnode;
			}
		}
		
		void insert_end(){
			if(start == NULL){
				start = newnode;
				end = newnode;
				newnode->next=start;
				newnode->prev=end;
			}
			else{
				newnode->prev = end;
				end->next = newnode;
				end = newnode;
				newnode->next=start;
				start->prev=end;
			}
		}
		
		void insert(){
			if(start == NULL){
				start = newnode;
				end = newnode;
				newnode->next=start;
				newnode->prev=end;
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
				while(ptr->data < newnode->data && ptr->next!=start){
					ptr = ptr->next;
				}
				newnode->next = ptr;
				newnode->prev = ptr->prev;
				ptr->prev->next = newnode;
				ptr->prev = newnode;
			}
		}
		
		void delete_beg(){
			NODE* temp;
			NODE* ptr;
			NODE* prev;
			if(start == NULL){
				cout << "Underflow...";
				return ;
			}
			if(start->next == start){
				temp = start;
				start = NULL;
				end = NULL;
				return;
			}
			else{
				temp = start;
				start = start->next;
				start->prev = end;
				end->next = start;
			}
			delete temp;
		}
		
		void delete_end(){
			NODE* temp;
			NODE* ptr;
			NODE* prev;
			if(start == NULL){
				cout << "Underflow...";
				return ;
			}
			if(start->next == start){
				temp = start;
				start = NULL;
				end = NULL;
				return;
			}
			else{
				temp = end;
				end = temp->prev;
				end->next = start;
			}
			delete temp;
		}
		
		void deletee(int item){
			NODE* temp;
			NODE* ptr;
			NODE* pre;
			if(item == start->data){
				this->delete_beg();
				return;
			}
			else if(item == end->data){
				this->delete_end();
				return;
			}
			else{
				ptr = start;
				pre = NULL;
				while(ptr->data != item && ptr->next != start){
					pre = ptr ; 
					ptr = ptr->next ;
				}
				if(ptr->data != item){
					cout << "ITEM DOESNOT EXIST....\n";
					return;
				}
				else{
					temp = ptr;
					pre->next = ptr->next;
					ptr->next->prev = pre;
				}
				delete temp;
			}
		}
		
		void display(){
			NODE* ptr = start;
			while(ptr->next != start){
				cout << ptr->data << " ";
				ptr = ptr->next;
			}
			cout << ptr->data;
		}
};

int main(){
	
	doubly_linked_list d;
	
	d.create_node(50);
	d.insert();
	
	d.create_node(20);
	d.insert();
	
	d.create_node(10);
	d.insert();
	
	
	d.create_node(30);
	d.insert();
	
	d.create_node(40);
	d.insert();
	
	d.display();
	
//	cout << endl;
//	
//	d.delete_beg();
//	d.display();
//	
//	cout << endl;
//	
//	d.delete_end();
//	d.display();
	
	cout << endl;
	
	d.deletee(50);
	d.display();
	
	return 0;
}
