// https://www.codechef.com/START31C/problems/ALTSTR

// Alternating String

#include <iostream>
#include <string>
using namespace std;

int main() {
	// KNOCKCAT
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    string str;
	    cin >> str;
	    int zcnt = 0, ocnt = 0;
	    for(int i = 0; i<str.length(); ++i)
	    {
	        if(str[i] == '0')
	            ++zcnt;
	        else 
	            ++ocnt;
	    }
	   
	    if(zcnt != ocnt)
	        cout<<(2*min(zcnt,ocnt)) + 1<<endl;
	    else
	        cout<<2*zcnt<<endl;
	}
	return 0;
}


// Solution Link

// https://www.codechef.com/viewsolution/61078517