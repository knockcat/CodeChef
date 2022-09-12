#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	// KNOCKCAT
	
	int t;
	cin >> t;
	for(int i = 0; i<t; ++i)
	{
	    int n;
	    cin >>n;
	    
	   // vector<int> v(n);
	    
	   // for(int i = 0; i<n; ++i)
	   //     cin >> v[i];
	    
	    int t[33][n+1];
	    for(int i = 1;i <= n; ++i)
	    {
	        int ind;
	        cin >> ind;
	        for(int j = 0; j<33; ++j)
	        {
	            t[j][i] = t[j][i-1];
	        }
	        int p = 32;
	        if(ind != 0)
	            p = (int)(log(ind)/log(2));
	        ++t[p][i];
	            
	    }
	    
	    int q;
	    cin >> q;
	    
	    
	    for(int i = 0; i<q; ++i)
	    {
	        int l, r, x;
	        cin >> l >> r >> x;
	        int cnt = 0;
	        int p = 32;
	        if(x != 0)
	            p = (int)(log(x)/log(2));
	        cnt = t[p][r]- t[p][l-1];
	        
	        int res = (r-l+1)-cnt;
	       cout<<res<<endl;
	    }
	    
	    
	}
	return 0;
}
