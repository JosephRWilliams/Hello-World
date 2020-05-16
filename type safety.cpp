#include "std_lib_facilities.h"

int main()
{
	double x;	//we purposely forget to initialize the value of x
			//to show how the value of an undefined variable effects code
	double y = x;	//the value of x is now undefined 
	double z = 2.0+x;	//the meaning of + and the value of z are both undefined
}

