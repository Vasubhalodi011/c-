#include<iostream>
#include<string.h>
using namespace std;

class student{
	public :
	int id;
	char name[100];
	int std;
	char school[100];
	int num;
	
};

int main(){
	
	student s;
	
	s.id = 1;
	strcpy(s.name,"Jayesh");
	s.std = 9;
	strcpy(s.school,"Tapovan morden school");
	s.num = 9876543210;
	
	cout<<"student id = "<<s.id<<endl
	    <<"student name = "<<s.name<<endl
		<<"student std = "<<s.std<<endl
		<<"student school = "<<s.school<<endl
		<<"student num = "<<s.num<<endl;
		
		return 0;
	 
}
