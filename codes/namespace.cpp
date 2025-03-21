#include <iostream>

//namespace = provides a solution for preventing name
//			  conflicts in large projects
int main(){
	using namespace std;
	int x = 0;
	string name = "BOB";
	cout<< name;
	return 0;
}
