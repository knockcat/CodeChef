#include <bits/stdc++.h>
using namespace std;
#define fast std::ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl "\n"
#define mod 1e97
#define int long long int
int32_t main() {
	// KNOCKCAT
	
	fast;
	int t;
	cin >> t;
	
	for(int i = 0; i<t; ++i)
	{
	    int n;
	    cin >> n;
	    
	    vector<int> c(n);
	    for(int i =0 ; i<n; ++i)
	        cin >> c[i];
	   int maxi  = c[0], index = -1;
	    for(int i = 1; i<n; ++i)
	       {
	           if(c[i] > maxi)
	           {
	               index = i;
	               break;
	           }
	       }
	   
	   if(index == -1)   
	   {
	    cout<<-1<<endl;
	   }
	   else
	   {
	       cout<<index<<endl;
    	   for(int i = 0; i<index; ++i)
    	    cout<<c[i]<<" ";
    	    
    	    cout<<endl;
    	   cout<<n - index<<endl;
    	   for(int j = index; j<n; ++j)
    	    cout<<c[j]<<" ";
    	    cout<<endl;
	   }
	    
	}
	return 0;
}