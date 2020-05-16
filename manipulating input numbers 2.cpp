#include "std_lib_facilities.h"

int main()
{
	cout<<"Please enter a floating-point value: \n";
	int n;
	cin>>n;
	double n_float = n;
	cout<<"n rounder to the nearest whole number == "<<n
		<<"\nn+1 == "<<n+1
		<<"\nthree times n == "<<3*n
		<<"\ntwo times n == "<<n+n
		<<"\nn squared == "<<n*n
		<<"\nhalf of n rounded to the nearest whole number == "<<n/2
		<<"\nn divided by 2, has a remainder of: "<<n%2
		<<"\nsquare root of n == "<<sqrt(n_float)
		<<'\n';	//name for a newline ("end of line") in output
}
