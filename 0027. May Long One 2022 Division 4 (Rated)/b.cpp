#include <iostream>
using namespace std;

int main() {
	// KNOCKCAT
	
	int t;
	cin >> t;
	for(int i = 0; i<t; ++i)
	{
	    int x,y;
	    cin >> x >> y;
	    
	    float ind = (float)x/100 * 107;
	   // cout<<ind<<endl;
	    if(y <= ind)
	        cout<<"YES"<<endl;
	    else 
	        cout<<"NO"<<endl;
	}
	return 0;
}