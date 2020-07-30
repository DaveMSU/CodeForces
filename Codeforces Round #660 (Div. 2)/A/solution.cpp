#include <iostream>

#define six_ten_fourteen 30

int main(){

	size_t t, n;
	int r;
	std::cin >> t;

	while( t-- ){

		std::cin >> n;		
		r = n - 30;

		if( r == 6 || r == 10 || r == 14 )
			std::cout << "YES\n" << n - 31 << " 15 10 6\n";

		else
		if( r > 0 )
			std::cout << "YES\n" << n - 30 << " 14 10 6\n";

		else
			std::cout << "NO\n";
	}

	return 0;
}
