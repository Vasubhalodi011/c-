#include <iostream>
#include <string.h>
using namespace std;

class Employee{
	public :
	
	  int id;
	  char name[100];
	  char role[100];
	  int salary;
	  int experience;
	  char address[100];
	  char email[100];
	  char contact[10];
	
	
	void setdata(){
		
		cout<<"Enter id =";
		cin>>id;
		cout<<"Enter name =";
		cin>>name;
		cout<<"Enter role =";
		cin>>role;
		cout<<"Enter salary =";
		cin>>salary;
		cout<<"Enter experience =";
		cin>>experience;
		cout<<"Enter address =";
		cin>>address;
		cout<<"Enter email =";
		cin>>email;
		cout<<"Enter contact =";
		cin>>contact;
	}
	void getdata(){
		
		cout<<"Enter id ="<<id<<endl;
		cout<<"Enter name ="<<name<<endl;
		cout<<"Enter role ="<<role<<endl;
		cout<<"Enter salary ="<<salary<<endl;
		cout<<"Enter experience ="<<experience<<endl;
		cout<<"Enter address ="<<address<<endl;
		cout<<"Enter email ="<<email<<endl;
		cout<<"Enter contact="<<contact<<endl;
		
		
	}
	
};

int main(){
	Employee em1,em2,em3,em4,em5;
	
	em1.setdata();
	em1.getdata();
	em2.setdata();
	em2.getdata();
	em3.setdata();
	em3.getdata();
	em4.setdata();
	em4.getdata();
	em5.setdata();
	em5.getdata();
	
		
	return 0;
}

