#include <iostream>
using namespace std;

class add
{
	public :
		int a[3][3] ,b[3][3];
		
		add(int a ,int b)
		{
			a = a;
			b = b;
		}
		
		add operator +()
		{
			A = +a;
			B = +b;
			return add (a , b);
		}
		
		void display()
		{
			cout<<"\nA ="<<a<<"\nB ="<<b<<endl;
		}
};
int main()
{
	add a1(45,67);
	+a1;
	a1.display();
	return 0;
}