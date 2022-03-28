// https://www.codechef.com/MARCH221C/problems/GENIUS

// Exact Marks

#include <iostream>
using namespace std;

void solve();

int main() {
	// KNOCKCAT
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    solve();
	    
	}
	return 0;
}


void solve()
{
    int n,x;
	    cin >> n>>x;
	    
	    int a  = 0,b = 0, c = 0;
	    
	    if(x % 3 == 0)
	        a = x/3;
	   else if((x%3) == 1)
	   {
	       a = a+(x/3) + 1;
	       b = b + 2;
	   }
	   else if((x%3) == 2)
	   {
	       a = a + (x/3) + 1;
	       ++b;
	   }
	   if(a + b <= n)
	   {
	       cout<<"YES"<<endl;
	       cout<<a<<" "<<b<<" "<<n-(a+b)<<endl;
	   }
	   else
	    cout<<"NO"<<endl;
}

// Soltution Link

// https://www.codechef.com/viewsolution/60399813