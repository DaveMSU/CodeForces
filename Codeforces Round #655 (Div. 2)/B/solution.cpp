#include <iostream>
#include <cmath>

int min_elem( size_t num ){

	for( int a = 2; a < sqrt(num)+1; ++a )
		if( num % a == 0 )
			return a;
	return 1;
}

int main(){

	size_t t;
	int n, me;
	std::cin >> t;

	while( t-- ){

		std::cin >> n;
		if( n%2 ){
			
			me = min_elem(n);
	
		if( me == 1 )
	
			std::cout << n-1 << " " << 1 << std::endl;
		else
			std::cout << n/me << " " << (n/me)*(me-1) << std::endl;
	
		}else
			std::cout << n/2 << " " << n/2 << std::endl;
	}

	return 0;
}
