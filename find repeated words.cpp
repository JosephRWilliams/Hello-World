#include "std_lib_facilities.h"

int main()
{
	cout<<"\nenter a sentence with at least one repeated word\n";
	int number_of_words = 0;
	string previous = "";	//previous word; initialized to "not a word"
	string current;		//current word
	while(cin >> current)	//reads a stream of words
	{
		++number_of_words;	//increase word count
		if (previous == current)	//checks if the word is same as last
			cout<<"word number "<<number_of_words<<" repeated: "<<current<<'\n';
		previous = current;
	}
}
