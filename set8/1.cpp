#include<iostream>
#include<string.h>
using namespace std;

class set{
	
	public :
		
		void get(){
			
			cout<<"hi"<<endl;
			
		}
	
};

class set : public get{
	
	public :
		
		void getdata(){
			
			cout<<"bye "<<endl;
			
		}
	
};


int main(){
	
	set u1;
	
	u1. set :: getdata();
	u1.getdata();
	
	return 0;
	
}

