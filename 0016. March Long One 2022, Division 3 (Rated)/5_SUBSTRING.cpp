// https://www.codechef.com/MARCH221C/problems/SUBSTRING

// Substring of a Substring

#include <iostream>
#include <string>
using namespace std;

int main() {
	// KNOCKCAT 
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    string str;
	    cin >> str;
	    int ind = 0, res = 0;
	    int n = str.size();
	    for(int i = 0; i<n; ++i)
	    {
	        if(str[0] != str[i] && str[i] != str[n-1])
	            ++ind;
	        else
	            ind = 0;
    	   res = max(res,ind);  
	    }
	    
	    if(res == 0)
	        cout<<"-1"<<endl;
	   else
	        cout<<res<<endl;
	}
	return 0;
}


// Solution Link

// https://www.codechef.com/viewsolution/60405862