#include <iostream>
using namespace std;

class Distance 
{
	private :
		int feet ,inches;
	public :
		Distance (int f,int i)
		{
			feet = f;
			inches = i;
		}
		Distance operator -()
		{
			feet = -feet;
			inches = -inches;
			return Distance (feet ,inches);
		}
		void display()
		{
			cout<<"\nfeet ="<<feet<<"\ninches ="<<inches;
		}
};
int main()
{
	Distance d1(56,87);
	-d1;
	d1.display();
	return 0;
}
