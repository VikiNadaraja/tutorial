#include <iostream>


int main(){
	
	
	std::string name;
	int age;
	
	std::cout << "What's your name? : " ;
	std::getline(std::cin>> std::ws,name); // includes spaces 
	std::cout<< "What's your age? : ";
	std::cin>>age;
	std::cout<<"Hello "<<name;
	std::cout<<"You're "<<age<<" years old";
	
	
	return 0;
}
