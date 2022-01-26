// https://www.codechef.com/START23C/problems/CHFPROFIT

// Chef and Profits 

#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    int cp,sp;
	    cp = x*y;
	    sp = x*z;
	    
	    cout<<sp - cp<<endl;
	}
	return 0;
}

// Solution link

// https://www.codechef.com/viewsolution/57128789