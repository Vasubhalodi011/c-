#include<iostream>
#include<string.h>
using namespace std;

class india{
	public :
		
	static char states[100];
	char drystates[100];
	char wetstates[100];
	char rainfallstates[100];
	char hotstates[100];
	public :
	
	void setdata(){
		cout<<"Enter drystates name = ";
		cin>>drystates;
		cout<<"Enter wetstates name = ";
		cin>>wetstates;
		cout<<"Enter rainfallstates name = ";
		cin>>rainfallstates;
		cout<<"Enter hotstates names = ";
		cin>>hotstates;
		
		
	}
	void getdata(){
		cout<<"Enter states"<<states<<endl;
		cout<<"Enter drystates name ="<<drystates<<endl;
		cout<<"Enter wetstates name ="<<wetstates<<endl;
		cout<<"Enter rainfallstates name ="<<rainfallstates<<endl;
		cout<<"Enter hotstates name ="<<hotstates<<endl;
	}
};
char india::states[100]="=29";

int main(){
	india ii;
	
	ii.setdata();
	ii.getdata();
	
	return 0;
	
}

