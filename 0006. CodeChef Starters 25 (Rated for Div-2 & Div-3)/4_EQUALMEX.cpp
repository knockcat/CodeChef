// https://www.codechef.com/problems/EQUALMEX

#include <iostream>
#include<map>
using namespace std;

int main() {
    
	// KNOCKCAT
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    map<int,int> m;
	    for(int i= 0; i<2*n; ++i)
	    {
	        int x;
	        cin >> x;
	        ++m[x];
	    }
	    
	    int flag = 1;
	    for(int i = 0; i<2*n; ++i)
	    {
	        if(m[i] == 1)
	        {
	            flag = 0;
	            break;
	        }
	    
	    else if(m[i] == 0)
	        break;
	    }
	   if(flag == 1)
	    cout<<"YES"<<endl;
	   else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/58156858