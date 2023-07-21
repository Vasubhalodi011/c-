#include<iostream>
#include<string.h>
using namespace std;

class employee{
	private :
	int id;
	char name[100];
	char work[100];
	char comp[100];
	int num;
	
};

int main(){
	
	employee s;
	
	s.id = 1;
	strcpy(s.name,"Jayesh");
	strcpy(s.work,"diamond poliser")  ;
	strcpy(s.comp,"harikrishna export");
	s.num = 9876543210;
	
	cout<<"employee id = "<<s.id<<endl
	    <<"employee name = "<<s.name<<endl
		<<"employee work = "<<s.work<<endl
		<<"employee comp = "<<s.comp<<endl
		<<"employee num = "<<s.num<<endl;
		
		return 0;
	 
}
