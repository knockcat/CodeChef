// https://www.codechef.com/viewsolution/89879903

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
const ll eps = 1e-9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;

vector<pair<int, int>> g[N];
vector<int> lev(N, INF);

int n, m;

void bfs()
{
    deque<int> q;
    q.push_back(1);
    lev[1] = 0;

    while (!q.empty())
    {
        int curr_v = q.front();
        q.pop_front();

        for (auto child : g[curr_v])
        {
            int child_v = child.first;
            int wt = child.second;
            if (lev[curr_v] + wt < lev[child_v])
            {
                lev[child_v] = lev[curr_v] + wt;

                if (wt == 0)
                    q.push_front(child_v);
                else
                    q.push_back(child_v);
            }
        }
    }

    cout << (lev[n] == INF ? -1 : lev[n]) << endl;
}

int32_t main()
{
    //    fast;

    //    int tt;
    //    cin >> tt;

    //    for(int i = 0; i<tt; ++i)
    // 	{
    // 	   // KNOCKCAT
    // 	}

    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        if (u == v)
            continue;
        g[u].push_back({v, 0});
        g[v].push_back({u, 1});
    }

    bfs();

    return 0;
}