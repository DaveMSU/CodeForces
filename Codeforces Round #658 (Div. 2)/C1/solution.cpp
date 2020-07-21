#include <iostream>
#include <vector>

typedef unsigned char u_char;

int main(){

	size_t t, n, k;
	std::cin >> t;

	while( t-- ){

		std::cin >> n;
		std::vector <u_char> a(n);
		std::vector <u_char> b(n);
		std::vector <size_t> p;
		for( auto &it : a ) std::cin >> it;	
		for( auto &it : b ) std::cin >> it;

		k = 0;
		for( size_t i = n-1; i > 0; --i ){
				
			if( a[i] != b[i] ){
				
				p.push_back(i+1);
				p.push_back(1);
				p.push_back(i+1);
				k += 3;
			}
		}

		if( a[0] != b[0] ){

			p.push_back(1);
			k += 1;
		}

		std::cout << k;
		if( k )
		for( auto it = p.end() - 1; it >= p.begin(); it-- ) std::cout << " " << *it;
		std::cout << std::endl;
	}

	return 0;
}
