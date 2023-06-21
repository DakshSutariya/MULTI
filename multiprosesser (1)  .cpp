#include<iostream>
#include<string.h>

using namespace std;

class faster
{
  private :
  char n[100];
  
  public :
  void set(char m[])
  {
    strcpy(n,m);
  }	
  void get() 
  {
  	cout<<n<<endl;
  }
  void setter()
  {
  	char s[100]="faster";
  	
  	cout<<n<<" "<<s<<endl;
  }
};
int main()
{
	faster m;
	m.set("I'am ");
	m.setter();
	return 0;
}
