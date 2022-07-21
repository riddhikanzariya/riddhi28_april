#include <iostream>
using namespace std;

class A	
{
	private :
		int num1;
	friend class B;
	
	public:
	A()
	{
		num1 = 100;
	}
};

class B 
{
	private :
		int num2;
	public :
	B ()
	{
		num2 = 200;
	}
	
	int add()
	{
		A a;
		return a.num1 + num2;
	}
};
int main()
{
	B b;
	cout<<"add = "<<b.add();
	return 0;
}