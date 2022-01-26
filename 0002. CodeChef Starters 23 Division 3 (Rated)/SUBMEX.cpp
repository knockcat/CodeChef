// https://www.codechef.com/START23C/problems/SUBMEX

// Subarray Mex

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int N, K ,X;
	    cin>>N>>K>>X;
	    vector<int> v(N);
	    
	    if(K<X )
	        cout<<"-1"<<endl;
	        
	    
	    else
	    {
	        int j = 0;
	        for(int i = 0; i<v.size();i++)
	        {
	           if(j >= X)
	           {
	               j  = 0;
	           }
	            v[i] = j;
	            j++;
	        }
	                
	       
	        for(int i = 0; i<v.size();i++)
	        {
	            cout<<v[i]<<" ";
	        }
	        cout<<endl;
	    }
	    
	}
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57179512