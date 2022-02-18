// https://www.codechef.com/START26C/problems/LOSTSEQ

// Careless Chef

#include <iostream>
#include <vector>
#include<numeric>
using namespace std;

int main() {
	// KNOCKCAT \\
	
	int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(2*n);
        
        for(int i= 0; i<2*n; ++i)
            cin>>v[i];
        
       int sum = 0;
       sum = accumulate(v.begin(),v.end(),sum);
        
        if(sum & 1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        
    }
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/58525668