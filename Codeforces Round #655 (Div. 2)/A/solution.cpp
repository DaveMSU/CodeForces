#include <iostream>

int main(){

	size_t t, n;
	std::cin >> t;
	
	while( t-- ){
	
		std::cin >> n;		
		while( n-- )
			std::cout << 1 << " ";
		std::cout << std::endl;
	}	

	return 0;
}
