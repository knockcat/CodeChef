// https://www.codechef.com/START27B/problems/BINSTRING

// Distinct Binary Strings

#include <iostream>
using namespace std;

void solve();

int main()
{
    // KNOCKCAT \\

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
    int cnt = 0;
    string str;
    cin >> str;

    for (int i = 0; i < n - 1; ++i)
    {
        if (str[i] != str[i + 1])
            ++cnt;
    }
    ++cnt;

    cout << cnt << endl;
}

// SOLUTION LINK

// https://www.codechef.com/viewsolution/58967317