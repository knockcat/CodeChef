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
	    string str;
	    cin >> str;
	    int n = str.size();
	    
	    for(int i = 0; i<n; ++i)
	    {
	        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
	            str[i] = 'a';
	    }
	  
	   // cout<<str<<endl;
// 	  cout<<str<<endl;
	  int count = 0, ans = 0;
	  for(auto itr :  str)
	  {
	      if(itr == 'a')
	        {
	            ++count;
	            ans = max(ans,count);
	        }
	        else
	            count = 0;
	  }
	  if(ans > 2)
	    cout<<"Happy"<<endl;
	  else
	    cout<<"Sad"<<endl;
	}
	return 0;
}