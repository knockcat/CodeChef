// https://www.codechef.com/MARCH221C/problems/SUB_XOR

// Subarray XOR 

#include <iostream>
#include<string>
#include <vector>
using namespace std;

void solve();

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

void solve()
{
    long long m = 998244353;
    long long n;
    cin>> n;
    
    string str;
    cin >> str;
    
    vector<long long> v(n,0);
    long long cnt = 1;
    long long res = 0;
    
    if(str[0] == '1')
        v[0] = 1;
    
    long long ind = v[0];
    
    for(long long i = 1; i < n; ++i)
    {
        if(str[i] == '1')
            ind += 1 + i;
        v[i] = ind;
        v[i] = v[i] % 2;
    }
    
    for(long long i = n-1; i>=0; --i)
    {
        if(v[i] == 1)
        {
            res += cnt;
            res = res % m;
        }
        cnt *= 2;
        cnt %= m; 
    }
    
    cout<<res % m<<endl;
}

// Solution Link

// https://www.codechef.com/viewsolution/60411501