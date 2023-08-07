#include<iostream>
#include<string.h>
using namespace std;

int main(){
    
	int a,b,c;
       cout<<"Enter Value A = ";
	   cin>>a;
       cout<<"Enter Value B = ";
	   cin>>b;
    
	char solution[100] = "Can not Divide by Zero";

    try{

        if (b==0)
		{
             
			throw 10;
        }
        else
	    {
             
			c=a/b;
            cout<<"C = "<<c<<endl;
        }
        
    }
    catch(char[]) 
	{
            
			cout<<solution<<endl;
    } 
    catch(int) 
	{

            cout<<"Can not Divide by Zero"<<endl;
    }
     
	return 0;

}
