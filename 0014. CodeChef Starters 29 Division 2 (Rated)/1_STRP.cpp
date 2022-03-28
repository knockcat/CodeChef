// https://www.codechef.com/START29B/problems/STRP

// String protocol 

#include <iostream>
using namespace std;

int main() {
	// KNOCKCAT \\
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    int cnt = 0;
	    
	    for(int i = 0; i<s.length(); ++i)
	    {
	       if(s[i] == s[i+1])
	       {
	           ++cnt;
	           ++i;
	       }
	       else
	            ++cnt;
	    }
	    
	    cout<<cnt<<endl;
	}
	
	return 0;
}

// Solution Link

https://www.codechef.com/viewsolution/59967179