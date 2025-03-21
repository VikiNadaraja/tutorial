#include <iostream>

// type conversion = conversion a value of one data type to another
//					Implicit = automatic
//					Explicit = precede value with new data type(int)


int main(){
	
	double x = (int)3.14;
	char y = 100; // displays 'd' according to ASCII 
	int correct = 8;
	int questions = 10;
	double score = correct/(double)questions * 100;
	std::cout<<score<<"%";
	
	//std::cout<<x;
	
	return 0;
}
