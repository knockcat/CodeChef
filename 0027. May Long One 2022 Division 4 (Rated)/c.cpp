#include <iostream>
using namespace std;

int main() {
	// KNOCKCAT
	
	int t;
	cin >> t;
	for(int i = 0; i<t; ++i)
	{
	    int n;
	    cin >> n;
	    
	    int ind = 50 * n;
	    
	    int sug_m = 0.2 * ind;
	    int rent = 0.3 * ind;
	    
	    cout<< ind - (2*sug_m + rent)<<endl;
	    
	}
	return 0;
}