#include <iostream>
using namespace std;

class Data
{
	private :
		int a = 54;
	protected :
	  void show()
		{
		  	cout<<"A ="<<a;
		}
};
class code :public Data
{
	private :
		int b = 80 ;
	public :
		void display()
		{
			show();
			cout<<"\nB ="<<b;
		}
};

int main()
{
	code c1;
	c1.display();
	return 0;
}