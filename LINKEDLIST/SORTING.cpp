#include<iostream>
using namespace std;

class NODE{
	public:
		int data;
		NODE* next;
};

class linkedList{
	public:
		NODE* start = NULL;
		NODE* ptr ;
		NODE* prev ;
		NODE* newnode;
		
		void insert(int data){
			
			ptr = start;
			
			newnode = new NODE;
			newnode->data = data;
			newnode->next = NULL;
			
			if(start == NULL){
				start = newnode;
			}
			else{
				ptr = start;
				while(ptr->next != NULL){
					ptr = ptr->next;
				}
				
				ptr->next = newnode;
			}
		}
		
		void sort(){
			NODE* ptr = start;
			
		}
		
		void display(){
			ptr = start;
			while(ptr != NULL){
				cout << ptr->data << " ";
				ptr = ptr->next;
			}
		}
		
};

int main(){
	
	linkedList l;
	
	int arr[5] = {40 , 50 , 20 , 10 , 30};
	
	for(int i=0 ; i < 5 ; i++){
		l.insert(arr[i]);
	}

	l.display();
	
	return 0;
}
