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
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool ok = true;
        int cnt = 0;
        vector<int> vec;

        for (int i = 0; i < n; ++i)
        {
            if (str[i] == '1')
            {
                ++cnt;
            }
            else
            {
                if (cnt > 0)
                {
                    vec.push_back(cnt);
                }
                cnt = 0;
            }
        }
        if (cnt > 0)
            vec.push_back(cnt);

        if (vec.size() == 1 and (vec[0] == 2 or vec[0] == 3))
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}