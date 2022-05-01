// https://www.codechef.com/START33D/problems/BUDGET_

// Monthly Budget

#include <iostream>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int x = 30 * b;

    if (x <= a)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

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

// Solution Link

https: // www.codechef.com/viewsolution/62189448