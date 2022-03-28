// https://www.codechef.com/MARCH221C/problems/CHFCLASS

// Akash and Missing Class

#include <iostream>
using namespace std;

int main() {
    
	// KNOCKCAT
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int res = n%7;
	    
	    if(res == 6)
	        res = 1;
	    else
	        res = 0;
	        
	    cout<< n/7 + res<<endl;
	    
	}
	
	return 0;
}


// Solution Link

// https://www.codechef.com/viewsolution/60396886