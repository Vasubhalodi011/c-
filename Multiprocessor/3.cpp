#include<iostream>
#include<string.h>
using namespace std;

class India{
	
	public :
		
		void set(){
			
			cout<<"He is hindu"<<endl;
			
		}
	
};

class pakistan : public India{
	
	public :
		
		void set(){
			
			cout<<"He is muslim "<<endl;
			
		}
	
};


int main(){
	
	pakistan u1;
	
	u1. India :: set();
	u1.set();
	
	return 0;
	
}

