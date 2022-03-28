// https://www.codechef.com/START29B/problems/PMA

// Plusle and Minun on Array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void knockcat();

int main() {
	// KNOCKCAT \\
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    knockcat();
	}
	return 0;
}

void knockcat()
{
    long long n , res = 0;
	    cin >> n;
	    
	    vector<long long> v(n);
	    vector<long long> a, b;
	    
	    
	    for(int i = 0; i<n; ++i)
	        cin>>v[i];
	   
	    for(int i = 0; i<n; ++i)
	    {
	        if(i & 1)
	            a.push_back(abs(v[i]));
	        else
	            b.push_back(abs(v[i]));
	    }
	    
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    
	    if(a[a.size() - 1] > b[0])
	        swap(a[a.size()-1], b[0]);
	        
	    for(int i = 0; i<b.size(); ++i)
	        res += b[i];
	    
	    for(int i = 0; i<a.size(); ++i)
	        res -= a[i];
	        
	    cout<<res<<endl;
}

// Solution Link

// https://www.codechef.com/viewsolution/60003294