#include <iostream>
#include <vector>
// typedef = reserved keyword used to create an additional
//			name (alias) for another data type
//			New identifier for an existing type
//			Helps with readability and reduces typos
// 			use when there is a clear benefit
//			replaced with using 'using' (work better with templates)

//typedef std::vector<std::pair<std::string,int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;
int main(){
	
	//pairlist_t pairlist;
	text_t firstname = "Bob";
	number_t age = 21;
	std::cout <<firstname;
	std::cout<<age;
	return 0;
}
