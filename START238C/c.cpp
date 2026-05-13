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
        int n, m;
        cin >> n >> m;
        int a = 1, b = m - 1;
        vector<int> v;
        for (int i = 0; i <= 40000; ++i)
        {
            v.push_back(0);
            v.push_back(a);
            v.push_back(a);
            v.push_back(0);
            v.push_back(b);
            v.push_back(b);

            if (v.size() >= (n + 1))
                break;
        }

        bool ans = true;
        vector<int> newV;
        for (int i = 0; i <= n; ++i)
        {
            newV.push_back(v[i]);
        }
        newV.push_back(0);

        // for(int i = 0; i <= n+1; ++i){
        //     cout<<newV[i]<<' ';
        // }cout<<endl;
        for (int i = 1; i <= n; ++i)
        {
            int sum = newV[i - 1] + newV[i + 1];
            if ((sum % m) != newV[i])
            {
                ans = false;
            }
        }

        if (ans)
        {
            for (int i = 1; i <= n; ++i)
            {
                cout << newV[i] << ' ';
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}