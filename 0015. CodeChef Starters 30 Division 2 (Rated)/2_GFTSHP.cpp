// https://www.codechef.com/START30B/problems/GFTSHP

// Gift Shop and Coupon

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// KNOCKCAT
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin >>n>>k;
	
	    vector<int> v(n);
	
	    for(int i= 0; i<n; ++i)
	        cin>>v[i];
	    
	    sort(v.begin(),v.end());
	 
	    int sum = 0, t = -1, cnt = 0;
	    for(int i = 0; i<n; ++i)
        {
            if(sum + v[i] >= k)
            {
                t = i;
                break;
            }
            sum += v[i];
            ++cnt;
        }
        if(t == -1)
            cout<<n<<endl;
        else
        {
            if(v[t] % 2 == 0)
            {
                if((v[t]/2 + sum) <= k)
                    ++cnt;
            }
            else
            {
                if((v[t]/2 + sum + 1) <= k)
                    ++cnt;
            }
            cout<<cnt<<endl;    
        }
        
        
	}
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/60614158