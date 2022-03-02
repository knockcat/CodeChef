// https://www.codechef.com/LTIME105B/problems/MAGNETSORT

// Magnet Sort

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    // KNOCKCAT \\

    int t;
    cin >> t;

    while (t--)
    {
        int n, cnt = 0;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        string s;
        cin >> s;

        if (is_sorted(v.begin(), v.end()))
        {
            cout << 0 << endl;
            continue;
        }

        for (auto x : s)
        {
            if (x == 'N')
                ++cnt;
        }

        if (cnt == n || cnt == 0)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> v1 = v;

        sort(v.begin(), v.end());

        int st = INT_MAX, lt = INT_MIN;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] != v1[i])
            {
                st = min(i, st);
                lt = max(i, lt);
            }
        }

        bool f1 = 0, f2 = 0;
        for (int i = 0; i < st; ++i)
        {
            if (s[i] != s[lt])
                f1 = 1;
        }
        for (int i = lt; i < n; ++i)
        {
            if (s[i] != s[st])
                f2 = 1;
        }

        if (s[st] != s[lt] || f1 || f2)
            cout << 1;
        else
            cout << 2;

        cout << endl;
    }

    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/59354714