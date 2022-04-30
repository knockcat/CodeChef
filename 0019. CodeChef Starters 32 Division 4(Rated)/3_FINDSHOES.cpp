// https://www.codechef.com/START32D/problems/FINDSHOES

// FINDSHOES

#include <iostream>
using namespace std;

void solve()
{
    int n, l, r;
    cin >> n >> l;
    r = n;
    if (l <= n)
        cout << r + n - l << "\n";
    else
        cout << r << "\n";
}

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/61681646