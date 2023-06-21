#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public :
		void faster()
		{
			cout<<"my name is faster"<<endl;
		}
};

class B : public A
{ 
    public :
    void faster()
	{
	 cout<<"institute name is read & white"<<endl;	
	}	
};
int main()
{
	B b;
	
	b.A::faster();
	b.faster();
	return 0;
}
