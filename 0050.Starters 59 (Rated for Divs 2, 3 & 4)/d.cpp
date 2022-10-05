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
	    int n, m;
	    
	    cin >> n;
	    vector<int> a(n);
	    for(int i = 0; i<n; ++i)
	        cin >> a[i];
	    cin >>m;
	    vector<int> b(m);
	    for(int i = 0; i<m; ++i)
	        cin >> b[i];

        int mxsum = INT_MIN ,sum = 0;
        
        for(auto itr : a)
        {
            sum += itr;
            mxsum = max(mxsum, sum);
            if(sum < 0)
                sum = 0;
        }
    
        
        for(auto itr : b)
        {
            if(itr > 0)
            {
                mxsum += itr;
            }
        }
        
        cout<<mxsum<<endl;
	    
	}
	return 0;
}