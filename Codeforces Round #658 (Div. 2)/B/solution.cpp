#include <iostream>
#include <vector>

int main(){

	size_t t, n, i;
	std::cin >> t;

	bool flag;


	while( t-- ){

		flag = true; // will win first?
		std::cin >> n;

		std::vector <long unsigned int> arr(n);

		for( auto &it : arr ) std::cin >> it;
		for( i = 0; arr[i] == 1 && i < n; ++i )
				flag = not flag;

		if( i == n ) flag = not flag;

		if( flag ) std::cout << "First"  << std::endl;
		else       std::cout << "Second" << std::endl;
	}
	
	return 0;
}
