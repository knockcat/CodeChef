// https://www.codechef.com/LTIME106C/problems/MINCOINS

// Minimum number of coins

#include <iostream>
using namespace std;

int main() {
	// KNOCKCAT
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int x ;
	    cin >> x;
	    
	    if(x % 5 != 0)
	        cout<<"-1"<<endl;
	    else
	    {
	        if(x % 10 == 0)
	            cout << x/10<<endl;
	        else
	            cout<< x/10 + 1 << endl;
	    }
	}
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/60773675