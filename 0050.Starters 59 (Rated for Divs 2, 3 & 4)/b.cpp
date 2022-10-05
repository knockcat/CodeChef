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
	    string str;
	    cin >> str;
	    
	    list<char> l;
	    
	    int start = 0, end = n-1;
	    
	    while(start<=end)
	    {
	        
	        if(start == end)
	        {
	            if(str[start] == '0')
	                l.push_front('0');
	            else
	                l.push_back('1');
	                
	           break;
	        }
	        
	        if(str[start] == '0')
	            l.push_front('0');
	        else
	            l.push_back('1');
	            
	        if(str[end] == '0')
	            l.push_back('0');
	        else
	            l.push_front('1');
	            
	       ++start, --end;
	    }
	    
	        
	    for(auto itr : l)
	        cout<<itr;
	    cout<<endl;
	}
	return 0;
}