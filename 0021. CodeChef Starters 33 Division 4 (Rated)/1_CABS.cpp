// https://www.codechef.com/START33D/problems/CABS

// The Cheaper Cab

#include <iostream>
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
    int a, b;
    cin >> a >> b;

    if (a < b)
        cout << "FIRST" << endl;
    else if (a > b)
        cout << "SECOND" << endl;
    else
        cout << "ANY" << endl;
}

// Solution Link

https: // www.codechef.com/viewsolution/62188132