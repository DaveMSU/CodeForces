#include <iostream>

#define limit 200

int main(){

	size_t t;
	std::cin >> t;

	size_t n, a_i;
	std::string str;

	while( t-- ){

		str = std::string( limit, 'a' );
		std::cin >> n;

		std::cout << str << std::endl;
		while( n-- ){

			std::cin >> a_i;
			str[a_i] = (str[a_i] == 'b' ? 'a' : 'b');
			std::cout << str << std::endl;
		}

	}

	return 0;
}
