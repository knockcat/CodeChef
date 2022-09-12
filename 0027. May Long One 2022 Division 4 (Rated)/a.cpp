#include <iostream>
using namespace std;

int main() {
	// KNOCKCAT
	
	int t;
	cin >> t;
	for(int i = 0; i<t; ++i)
	{
	    int x, y;
	    cin >> x >> y;
	    
	    if( x == y && x > 0 && y > 0)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	    
	}
	return 0;
}