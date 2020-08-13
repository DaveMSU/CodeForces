#include <iostream>
#define newLine std::cout << std::endl;

int main(){

	size_t t, n;
	std::cin >> t;

	while( t-- ){

		std::cin >> n;

		for( size_t i = 1; i <= n; ++i )
			std::cout << i << " ";
		newLine;
	}

	return 0;
}
