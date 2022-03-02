// https://www.codechef.com/LTIME105B/problems/PLPROCESS

// Parallel Processing

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // KNOCKCAT \\

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        long long int l = 1, r = v.size() - 2;
        long long int x = v[0], y = v[v.size() - 1];
        while (l <= r)
        {
            if (x + v[l] < y + v[r])
            {
                x += v[l];
                ++l;
            }
            else
            {
                y += v[r];
                --r;
            }
        }

        cout << max(x, y) << endl;
    }
}

// Solution Link

// https://www.codechef.com/viewsolution/59337641