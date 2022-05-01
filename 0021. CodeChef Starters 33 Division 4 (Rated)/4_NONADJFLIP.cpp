// https://www.codechef.com/START33D/problems/NONADJFLIP

// Non Adjacent Flips

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve();

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    string s, vs;
    cin >> s;

    int ind = 0;
    for (int i = 0; i < n; ++i)
    {
        vs = s;
        sort(vs.begin(), vs.end());

        if (vs[0] == vs[n - 1] && vs[0] != '1')
            break;
        else if (vs[0] != vs[n - 1] && vs[0] != '1')
            ++ind;
        else if (vs[0] == '1')
            ++ind;

        for (int k = 0; k < n; ++k)
        {
            if (s[k] == '1')
            {
                s[k] = '0';
                ++k;
            }
        }
    }
    cout << ind << endl;
}

// Solution Link

// https://www.codechef.com/viewsolution/62192948