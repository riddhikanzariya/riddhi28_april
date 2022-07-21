#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int a;
	ifstream riddhi;
	riddhi.open("r1.txt",ios::out);
	cout<<"Enter A :";
	cin>>a;
	cout<< a << endl;
    riddhi.close();
	
	ofstream gayatri;
	gayatri.open("r1.txt",ios::in);
	cout<<"reading from file."<<endl;
	riddhi>>a;
	cout<<a<<endl;
	gayatri.close();
	return 0;
	
	
	
}