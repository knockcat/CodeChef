// JAI SHREE RAM
// KNOCKCAT

#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long int
#define endl "\n"

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll eps = -1e9;
const ll maxn = 1e5 + 10;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

// You better take more time but avoid penalties
// Look at Constraints

// If I'll be good at programming she will be mine -> Success :D

int32_t main()
{
    fast; // should be disabled for Interactive Problems

    int tt;
    cin >> tt;

    while (tt--)
    {
        // knockcat
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> v(n);
        map<int, int> mp;
        for(auto& ele : v)
        {
            cin >> ele;
            ++mp[ele];
        }
        vector<pair<int, int>> vp;
        copy(mp.begin(), mp.end(), back_inserter(vp));
        sort(vp.begin(), vp.end(), [&](const auto& a, const auto& b){
            return a.first > b.first;
        });

        int i = 0, stu = 0;
        while(k-- and i < vp.size()){
            stu += vp[i++].second;

        }
        cout<<min(x, stu)<<endl;

    }
    return 0;
}