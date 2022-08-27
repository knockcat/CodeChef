#include <iostream>
#include <climits>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        map<int, int> m;

        for (auto i : v)
            ++m[i];

        int mx = INT_MIN;
        int ans = 0;
        int ind = 0;

        for (auto i : m)
        {
            if (mx < i.second)
            {
                mx = i.second;
                ans = i.first;
            }
        }
        for (auto i : m)
        {
            if (mx == i.second)
                ++ind;
        }
        if (ind > 1)
            cout << "CONFUSED" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}