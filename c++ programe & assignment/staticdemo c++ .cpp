#include <iostream>
using namespace std;

class staticDemo
{
   	private :
		    double length,breadth,height;
	public :
		    static int objectcount;
		    
	  staticDemo(double length,double breadth,double height)
	  {
	  	cout<<"\nparameterized constructor called."<<endl;
	  	this ->length = length;
	  	this ->breadth = breadth;
	  	this ->height = height;
	  	    objectcount++;
	  }
	  
	  void volume()
	  {
	  	cout<<"\nVolume is"<<(length*breadth*height);
	  }
};

int staticDemo ::objectcount =0;

int main()
{
	staticDemo s1(5,6,3);
	s1.volume();
	staticDemo s2(4,7,3);
	s2.volume();
	staticDemo s3(8,4,3);
	s3.volume();
	cout<<"\nobjectcount ="<<s3.objectcount;
	return 0;
}