#include "std_lib_facilities.h"

int main()
{
	double d=0;	//initialize d as zero
	while (cin>>d)	//repeats the statements below as long
	{		//as we type in numbers
		int i = d;	//try to squeeze a double into an int 
		char c = i;	//try to squeeze an int into a char
		int i2 = c;	//get the integer value of the character
		cout << " d==" << d		//the original double input
			<< " i==" << i		//after the original double is converted into an int
			<< " i2==" << i2	//the int value of the char
			<< " char(" << c << ")\n";	//the char
	}
}
