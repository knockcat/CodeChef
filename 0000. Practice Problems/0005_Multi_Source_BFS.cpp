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

const int N = 1e3 + 10;
const int INF = 1e9 + 10;

// vector<pair<int,int>> g[N];

int n, m;

int visited[N][N];
int grid[N][N];
int lev[N][N];

vector<int> dx = {-1, +1, 0, 0, -1, -1, +1, +1};
vector<int> dy = {0, 0, -1, +1, -1, +1, -1, +1};

void reset()
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            visited[i][j] = 0;
            lev[i][j] = INF;
        }
    }
}

bool isValid(int i, int j)
{
    return (i >= 0 and j >= 0 and i < n and j < m);
}

int bfs()
{
    int maxi = -1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            maxi = max(maxi, grid[i][j]);
        }
    }

    queue<pair<int, int>> q;
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == maxi)
            {
                q.push({i, j});
                visited[i][j] = true;
                lev[i][j] = 0;
            }
        }
    }

    // multisource bfs

    while (!q.empty())
    {
        int curr_x = q.front().first;
        int curr_y = q.front().second;
        q.pop();

        for (int i = 0; i < 8; ++i)
        {
            int newx = curr_x + dx[i];
            int newy = curr_y + dy[i];

            if (!isValid(newx, newy) or visited[newx][newy])
                continue;

            q.push({newx, newy});
            visited[newx][newy] = true;
            lev[newx][newy] = lev[curr_x][curr_y] + 1;
            ans = max(ans, lev[newx][newy]);
        }
    }

    return ans;
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    for (int i = 0; i < tt; ++i)
    {
        // KNOCKCAT
        reset();
        cin >> n >> m;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> grid[i][j];
            }
        }

        cout << bfs() << endl;
    }
    return 0;
}