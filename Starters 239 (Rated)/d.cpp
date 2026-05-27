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
        int n, m, k;
        cin >> n >> m >> k;
        priority_queue<vector<int>> pq;
        vector<int> v(n);
        int i = 0;
        for (auto &ele : v)
        {
            cin >> ele;
            int full = ele / k;
            int rem = ele % k;
            if (full)
                pq.push({full, k, i});
            pq.push({1, rem, i});
        }

        int sum = 0, roses = 0;
        while (!pq.empty())
        {
            int freq = pq.top()[0];
            int quantity = pq.top()[1];
            int have = (quantity + 1) * freq;
            pq.pop();
            if ((sum + have) >= m)
            {
                int rem = m - sum;
                int b = rem / (quantity + 1);
                roses += rem;
                roses -= b;
                break;
            }
            else
            {
                roses += (freq * 1LL * quantity);
                sum += have;
            }
        }

        cout << roses << endl;
    }
    return 0;
}