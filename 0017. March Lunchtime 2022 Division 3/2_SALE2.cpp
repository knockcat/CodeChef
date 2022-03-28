// https://www.codechef.com/LTIME106C/problems/SALE2

// Buy 2 Get 1 Free

#include <iostream>
using namespace std;

int main() {
	// KNOCKCAT
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n, x;
	    
	    cin >> n >> x;
	    
	    int d  = n/3;
	    
	    n -= d;
	    
	    cout<<n*x<<endl;
	    
	}
	
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/60781638