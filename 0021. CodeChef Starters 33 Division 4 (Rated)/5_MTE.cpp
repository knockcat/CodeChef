// https://www.codechef.com/START33D/problems/MTE

// Make Them Equal

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    vector<int> v(x);

    for (int i = 0; i < x; ++i)
        cin >> v[i];
    int ev = 0, od = 0;
    for (int i = 0; i < x; ++i)
    {
        if (v[i] % 2 == 0)
            ++ev;
        else
            ++od;
    }

    if (od % 2 == 0)
        cout << min(ev, od / 2) << endl;
    else
        cout << ev << endl;
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

// https://www.codechef.com/viewsolution/62200508