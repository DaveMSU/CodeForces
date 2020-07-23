#include <iostream>
#include <vector>
 
#define newLine std::cout << std::endl;
 
int main(){
 
	size_t t, n, cnt;
	std::cin >> t;
 
	while( t-- ){
 
		std::cin >> n;
		std::string a;
		std::string b;
		std::cin >> a >> b;
		std::vector <size_t> p1;	
		std::vector <size_t> p2;	
		a += "0"; b += "0";
		
 
		for( size_t i = 0; i < n; ++i ){
 
			if( a[i] != a[i+1] ) p1.push_back( i+1 );		
			if( b[i] != b[i+1] ) p2.push_back( i+1 );
		}
 
		p1.insert( p1.end(), p2.rbegin(), p2.rend() );
 
		std::cout << p1.size();
		for( auto &it : p1 ) std::cout << " " <<  it; newLine;	
	}
 
	return 0;
}
