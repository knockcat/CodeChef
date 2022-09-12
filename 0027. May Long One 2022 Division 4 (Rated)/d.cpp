#include <iostream>
using namespace std;

int main() {
	// KNOCKCAT
	
	int t;
	cin >> t;
	for(int i = 0; i<t; ++i)
	{
	    long n,x,y;
	    cin >> n >> x >> y;
	    
	    int a = n - x + x - 1 + n - y + y - 1;
	    int b = min(x-1, y-1);
	    int c = min(x-1, n-y);
	    int d = min(n-x, y-1);
	    int e = min(n-x, n-y);
	    
	    cout<<a + b + c + d + e << endl;
	}
	return 0;
}