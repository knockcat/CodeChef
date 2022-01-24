// https://www.codechef.com/COOK137C/problems/PIZZA_BURGER

// Hungry Ashish        Problem Code: PIZZA_BURGER

#include <iostream>
using namespace std;

int main() {
	int x,y,z,t;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    if(x < y && x < z)
	        cout<<"Nothing"<<endl;
	    else if((x >= y && x >= z) || (x >= y && x <= z))
	        cout<<"PIZZA"<<endl;
	    else if(y > x && z <= x)
	        cout<<"BURGER"<<endl;
	    
	}
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/56898577