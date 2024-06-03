#include<iostream>
using namespace std;

class num{
	private:
		int x,y;
	public:
		void getdata()
		{
			cout<<"ENTER TWO NUMBERS:";
			cin>>x>>y;
		}
		
		void display()
		{
			cout<<"X---->"<<x<<"\n";
			cout<<"Y---->"<<y<<"\n";
		}
	friend num operator +(num,num);
};

num operator +(num p1,num p2)
	{
		num temp;
		temp.x=p1.x+p2.x;
		temp.y=p1.y+p2.y;
		return temp;
	}

int main()
{
	num n1;
	num n2;
	
	n1.getdata();
	n2.getdata();
	
	n1.display();
	n2.display();
	
	num n3=n1+n2;
	
	n3.display();
		
	return 0;
}
