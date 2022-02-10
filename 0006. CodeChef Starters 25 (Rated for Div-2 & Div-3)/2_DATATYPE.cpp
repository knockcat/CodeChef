// https://www.codechef.com/START25C/problems/DATATYPE

#include <iostream>
using namespace std;

int main() {
	// KNOCKCAT
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    if(x<=n)
	        cout<<x<<endl;
	    else
	        cout<<x%(n+1)<<endl;
	        
	}
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/58154118