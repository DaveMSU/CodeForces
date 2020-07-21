#include <iostream>
#include <set>

int main(){

	size_t t, n, m;
	std::cin >> t;		
	
	size_t num, ans;
	std::set <size_t> myset;
	
	while( t-- ){

		std::cin >> n >> m;		
		ans = 0;
		myset.clear();
		
		while( n-- ){
		       
			std::cin >> num;
			myset.insert( num );
		}

		while( m-- ){

			std::cin >> num;
			if( myset.find( num ) != myset.end() ){
				
				ans = num;
				break;
			}
		}

		while( m-- && ans ) std::cin >> num;

		if( ans ) std::cout << "YES\n1 " << ans << std::endl;
		else 	  std::cout << "NO\n";
	}
		
	return 0;
}	
