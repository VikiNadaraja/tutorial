#include <iostream>

int main(){
	//int (whole number)
	int x; // declaration
	x = 5; // assignment
	int y = 6;
	int sum = x+y;
	int age = 25;
	//double (num incl decimal)
	double price = 20.20;
	double temp = 37.8;
	double cgpa = 4.00;
	//single charc
	char grade = 'A';
	//boolean true or false
	bool student = false;
	bool power = true;
	bool sale = true;
	//string obj that represent a sequence of text
	std::string name = "Bob";
	
	std::cout<<"Hello " <<name<<'\n';
	std::cout<<"You are "<<age<<" years old";
	return 0;
}
