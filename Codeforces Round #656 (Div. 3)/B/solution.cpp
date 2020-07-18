#include <iostream>
#include <set>
 
int main(){
 
	std::set <size_t> stree;
	size_t t, n, cur;
 
	std::cin >> t;
 
	while( t-- ){
 
		std::cin >> n;
		n *= 2;
		while( n-- ){
 
		       	std::cin >> cur;
			if( stree.find(cur) == stree.end() ){
 
				std::cout << cur << " ";
				stree.insert(cur);
			}
		}
		std::cout << std::endl;
		stree.clear();
	}
	
  return 0;
}
