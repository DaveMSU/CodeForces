#include <iostream>
#include <cmath>

#define newLine std::cout << std::endl;

int main(){

	size_t t;
	std::cin >> t;

	float n;

	while( t-- ){

		std::cin >> n;

		for( size_t i = 0; i < n - ceil(n/4); ++i ) std::cout << 9;
		for( size_t i = 0; i <     ceil(n/4); ++i ) std::cout << 8;
		newLine;
	}

	return 0;
}
