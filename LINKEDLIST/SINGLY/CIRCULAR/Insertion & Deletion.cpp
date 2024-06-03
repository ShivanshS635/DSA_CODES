#include<iostream>
using namespace std;

class NODE{
	public:
		int data;
		NODE* next;
};

class Circular_Linked_List{
	public:
		NODE* start = NULL;
		NODE* ptr = NULL;
		NODE* newnode;
		NODE* prev = NULL;
		
		NODE* create_node(int data){
			
			newnode = new  NODE;
			newnode->data = data;
			newnode->next = NULL;
			
			return newnode;
		}
		
		void insert_beg(){
			if(start == NULL){
				start = newnode;
				newnode->next = start;
			}
			else{
				ptr = start;
				while(ptr->next != start){
					ptr = ptr->next;
				}
				
				newnode->next = start;
				start = newnode;
				ptr->next = start;
			}
		}
		
		void insert_end(){
			if(start == NULL){
				start = newnode;
				newnode->next = start;
			}
			else{
				ptr = start;
				while(ptr->next != start){
					ptr = ptr->next;
				}
				
				ptr->next=newnode;
				newnode->next=start;
			}
		}
		
		void insert(){
			ptr = start;
			prev= NULL;
			
			if(start == NULL){
				start = newnode;
				newnode->next = start;
			}
			
			else{
				while(ptr->data < newnode->data && ptr->next != start){
					prev = ptr;
					ptr = ptr->next;
				}	
				if(newnode->data < ptr->data){
					if(start->data > newnode->data){
						this->insert_beg();
					}		
					else{//MIDDLE
						newnode->next = ptr;
						prev->next = newnode;
					}
				}		
				else{
					this->insert_end();
				}
			}
		}	
		
		void delete_beg(){
			if(start == NULL){
				cout << "UNDERFLOW...";
				return;
			}
			if(start->next == start){
				NODE* temp;
				temp = start;
				start = NULL;
				delete temp;
			}
			else{
				NODE* temp;
				temp = start;
				NODE* ptr = start;
				while(ptr->next != start ){
					ptr = ptr->next;
				}
				ptr->next=start->next;
				start = start->next;
				delete temp;
			}
			
		}
		
		void delete_end(){
			if(start == NULL){
				cout << "UNDERFLOW...";
				return;
			}
			if(start->next == start){
				NODE* temp;
				temp = start;
				start = NULL;
				delete temp;
			}
			else{
				NODE* temp = NULL;
				NODE* ptr = start;
				NODE* prev = NULL;
				while(ptr->next != start ){
					prev = ptr;
					ptr = ptr->next;
				}
				temp = ptr;
				prev->next = ptr->next;
				delete temp;
			}
		}	
		
		void deletee(int item){
			if(item == start->data){
				this->delete_beg();
				return;
			}
			else{
				NODE* ptr = start;
				NODE* prev = NULL;
				
				while(ptr->data != item && ptr->next != start){
					prev = ptr;
					ptr = ptr->next;
				}
				if(ptr->data == item){
					NODE* temp = ptr;
					prev->next = ptr->next;
					delete temp;
				}
				else{
					cout << "Item Doesnot Exist...\n";
					return ;
				}
			}
		}
		
		void display(){
			NODE* ptr = start;
			if(start == NULL){
				cout << "EMPTY" ;
			}
			else{
				while(ptr->next != start){
				cout << ptr->data << " ";
				ptr = ptr->next;
				}
			cout << ptr->data;
			}
		}
};

int main(){
	
	Circular_Linked_List l;
	
	l.create_node(10);
	l.insert();
	
	l.create_node(20);
	l.insert();
	
	l.create_node(15);
	l.insert();
	
	l.create_node(5);
	l.insert();
	
	l.create_node(25);
	l.insert();
	
	l.create_node(50);
	l.insert();
	
	l.create_node(30);
	l.insert();
	
	l.display();
	
	cout << endl;
	
	l.deletee(55);
	l.display();
	
	return 0;
}
