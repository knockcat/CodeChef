// https://www.codechef.com/START33D/problems/MINCARS

// Minimum Cars required

#include <iostream>
using namespace std;

void solve()
{
    int num;
    cin >> num;

    if (num % 4 != 0)
        cout << num / 4 + 1 << endl;
    else
        cout << num / 4 << endl;
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

// https://www.codechef.com/viewsolution/62190745