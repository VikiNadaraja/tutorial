#include <iostream>
#include <cmath>

int main(){
	
	double x = 3.99;
	double y = 4;
	double z;
	
	z = std::max(x,y);
	z = std::min(x,y);
	z = pow(2,3);
	z = sqrt(9);
	z = abs(-3); // turns - value to +
	z = round(x); 
	z = ceil(x); // round up
	z = floor(x); // round down
	//std::cout<<z;
	
	return 0;
}
