// https://www.codechef.com/MARCH221C/problems/WORDLE

// Wordle

#include <iostream>
#include <string>
using namespace std;

int main() {
    
	// KNOCKCAT
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s, t, res;
	    cin >> s>> t;
	    
	    for(int i= 0; i<s.size(); ++i)
	    {
	        if(s[i] == t[i])
	            res.push_back('G');
	        else
	           res.push_back('B');
	    }
	    
	    cout<<res<<endl;
	}
	
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/60395717