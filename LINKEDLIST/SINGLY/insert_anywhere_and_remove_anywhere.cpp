#include<iostream>
using namespace std;

class NODE{
	public:
		int info;
		NODE* link = NULL;
};

class Linked_List{
	public:
		
		NODE* start=NULL;
		NODE* temp;
		NODE* ptr=start;
		NODE* pre=NULL;
		NODE* newnode;
		
		NODE* insert_mid(int n){
			
			if(start == NULL){
				NODE* newnode = new NODE;
				newnode->info=n;
				start = newnode;
			}
			
			else{
				NODE* newnode = new NODE;
				newnode->info=n;
				
				if(start->info > newnode->info){
					newnode->link = start;
					start = newnode;
				}
				
				else{
					
					pre=NULL;
					ptr = start;
					while(ptr != NULL && newnode->info > ptr->info){
						pre=ptr;    
						ptr=ptr->link;
					}
					newnode->link = ptr;
					pre->link = newnode;
				}
			}
			return start;
		}
		
		void remove_mid(int item){
			if(start == NULL){
				cout << "Linked List Underflow";
				return;
			}
			
			if(item == start->info){
				temp = start;
				start = start->link;
			}
			
			else{
				pre=NULL;
				ptr=start;
				
				while(ptr != NULL && ptr->info != item){
					pre = ptr;
					ptr = ptr->link;
				}
				
				if(ptr == NULL){
					cout << "ITEM DOESNOT EXIST."<<endl;
					return;
				}
				
				temp = ptr;
				pre->link = ptr->link;
			}
			
			delete temp;
		}
		
		NODE* rotate(NODE* start, int k) {
	        NODE *ptr , *prev;
	        for(int i=1 ; i<=k ; i++){
	            ptr = start;
	            prev = NULL;
	
	            while(ptr->link != NULL){
	                prev = ptr;
	                ptr = ptr->link;
	            }
	            ptr->link = start;
	            start = ptr;
	            prev = NULL;
	        }
        	return start;
    	}
		
		void display(){
			ptr = start;			
			while(ptr != NULL){
				cout << ptr->info << " ";
				ptr = ptr->link;
			}
		}
};

int main(){
	
	Linked_List l;
	NODE* X;
	l.insert_mid(1);
	l.insert_mid(2);
	l.insert_mid(3);
	l.insert_mid(4);
	l.insert_mid(5);
	
	l.display();
	cout << endl;
	
	l.remove_mid(2);
	
	l.display();
	cout << endl;
	
	l.remove_mid(4);
	
	l.display();
	cout << endl;
	
	l.remove_mid(0);
	l.display();
	
	return 0;
}
