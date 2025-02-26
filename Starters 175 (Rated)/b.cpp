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

/*
Things have not went as I wanted and yes I am feeling maybe this is not meant for me (because of results) but still I will do this as,
I cannot given up.
Reaching here and still trying is also a milestone for me.
My journey has been incredible and I will surely improve.
It's just a matter of time and I am sure I am going to make it.

Till now show some resistance, focus on small goals and the big goals will take care of themselves.
knockcat this side...
*/

pair<int, int> get(string &s)
{
    int n = s.size();
    int z = 0;
    for (auto &ch : s)
    {
        z += (ch == '0');
    }
    return {z, n - z};
}

void solve(vector<pair<int, int>> &copy, int &ans)
{
    auto a = copy[0];
    auto b = copy[1];
    auto c = copy[2];
    int firsNeedone = a.first;
    int secondNeedOne = b.first;
    // cout << firsNeedone << ' ' << secondNeedOne << endl;
    if (c.second >= (firsNeedone + secondNeedOne))
    {
        ans = min(ans, (firsNeedone + secondNeedOne));
    }

    int firstNeedZero = a.second;
    int secondNeedZero = b.second;
    // cout << firstNeedZero << ' ' << secondNeedZero<<endl;
    if (c.first >= (firstNeedZero + secondNeedZero))
    {
        ans = min(ans, (firstNeedZero + secondNeedZero));
    }
}

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
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        auto a = get(s1);
        auto b = get(s2);
        auto c = get(s3);

        int z = a.first + b.first + c.first;
        int o = a.second + b.second + c.second;

        if (z % n != 0 and o % n != 0)
        {
            cout << -1 << endl;
            continue;
        }
        vector<pair<int, int>> v = {a, b, c};
        vector<pair<int, int>> copy = v;
        int ans = INT_MAX;
        solve(copy, ans);
        next_permutation(copy.begin(), copy.end());
        while (copy != v)
        {
            solve(copy, ans);
            next_permutation(copy.begin(), copy.end());
        }
        cout << ans << endl;
    }

    return 0;
}