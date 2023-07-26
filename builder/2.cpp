#include <iostream>
#include <string.h>
using namespace std;

class Highschool{
	
	public :
    	int id;
	    char studentname[100];
	    char studentrollno[100];
	    int studentstandard;
	    int studentage;
        char studentcontact[10];
	    static char studenteducationinstitutename[100];
	    char studentaddress[100];

	public :
	
	void setdata(){
		
		cout<<"Enter id = ";
		cin>>id;
		cout<<"Enter student name = ";
		cin>>studentname;
		cout<<"Enter student roll no = ";
		cin>>studentrollno;
		cout<<"Enter student standard = ";
		cin>>studentstandard;
		cout<<"Enter student age = ";
		cin>>studentage;
		cout<<"Enter student contact = ";
		cin>>studentcontact;
		cout<<"Enter address = ";
		cin>>studentaddress;
	
	}
	void getdata(){
		
		cout<<"\nEnter id = "<<id<<endl;
		cout<<"Enter student name = "<<studentname<<endl;
		cout<<"Enter student roll no = "<< studentrollno<<endl;
		cout<<"Enter student standard = "<<studentstandard<<endl;
		cout<<"Enter student age = "<<studentage<<endl;
		cout<<"Enter student contact = "<<studentcontact<<endl;
		cout<<"Enter student education institute name = "<<studenteducationinstitutename<<endl;
		cout<<"Enter student address = "<<studentaddress<<endl;
	
	}
};
char Highschool::studenteducationinstitutename[100]="Tapovan modern school";

class college{
	
	    int id;
    	char studentname[100];
    	char studentrollno[100];
	    int studentstandard;
	    int studentage;
    	char studentcontact[10];
	    static char studenteducationinstitutename[100];
	    char studentaddress[100];
	
	public :
	
    void setdata(){
    	cout<<"Enter id = ";
		cin>>id;
		cout<<"Ente student name = ";
		cin>>studentname;
		cout<<"Enter student roll no = ";
		cin>>studentrollno;
		cout<<"Enter student standard = ";
		cin>>studentstandard;
		cout<<"Enter student age = ";
		cin>>studentage;
		cout<<"Enter student contact = ";
		cin>>studentcontact;
		cout<<"Enter address = ";
		cin>>studentaddress;
	
	}
	void getdata(){
		cout<<"\nEnter id ="<<id<<endl;
		cout<<"Enter student name ="<<studentname<<endl;
		cout<<"Enter student roll no ="<< studentrollno<<endl;
		cout<<"Enter student standard ="<<studentstandard<<endl;
		cout<<"Enter student age ="<<studentage<<endl;
		cout<<"Enter student contact ="<<studentcontact<<endl;
		cout<<"Enter student education institute name ="<<studenteducationinstitutename<<endl;
		cout<<"Enter student address ="<<studentaddress<<endl;
		
	}
	
};
char college::studenteducationinstitutename[100]="Dharuka";

int main(){
	Highschool hs;
	hs.setdata();
	hs.getdata();
	
	college cg;
	cg.setdata();
	cg.getdata();
	

	return 0;
	
}

