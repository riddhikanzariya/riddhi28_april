#include <iostream>
using namespace std;

template <typename H>
H add(H a, H b)
{
	return a + b;
}
int main()
{
	cout<<"Integer "<<add<int>(34,23)<<endl;
	cout<<"float "<<add<float>(4.5f,7.9f)<<endl;
	cout<<"string "<<add<string>("riddhi","kanzariya");
	return 0;
}