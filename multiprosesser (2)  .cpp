#include<iostream>
#include<string.h>
using namespace std;

class faster
{
	public :
		void set()
		{
		  cout<<"default value = 11"<<endl;	
		}
		void set(int n)
		{
			cout<<"1st value = "<<n<<endl;
		}
		void set(int n,int m)
		{
			cout<<"2nd values are = "<<n<<m<<endl;
		}
		void set(int n,int m,int o)
		{
			cout<<"3rd values are = "<<n<<m<<o<<endl;
		}
};
int main()
{
	faster t;
	t.set();
	t.set(20);
	t.set(30,40);
	t.set(50,60,70);
	return 0;
}
