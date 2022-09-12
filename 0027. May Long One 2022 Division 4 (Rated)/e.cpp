#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;

int main() {
	// KNOCKCAT
	
	int t;
	cin >> t;
	for(int i = 0; i<t; ++i)
	{
	    int n;
	    cin >> n;
	    
	    vector<int> v(n);
	    for(int i = 0; i<n; ++i)
	        cin >> v[i];
	        
	    map<int,int> m;
	    for(auto i : v)
	        ++m[i];
	        
	    int mx = INT_MIN;
	    for(auto i : m)
	    {
	        mx = max(mx, i.first + i.second - 1);
	    }
	    
	    cout<<mx<<endl;
	}
	return 0;
}