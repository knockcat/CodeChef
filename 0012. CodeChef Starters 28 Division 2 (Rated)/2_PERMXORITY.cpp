// https://www.codechef.com/START28B/problems/PERMXORITY

// Permutation Xority

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

        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }

        if (n & 1)
        {
            int x = n;
            for (int i = 0; i < n; ++i)
            {
                cout << x << " ";
                --x;
            }
            cout << endl;
            continue;
        }

        int x = 1;
        for (int i = 0; i < n; ++i)
        {
            v[i] = x;
            ++x;
        }
        v[0] = 2;
        v[1] = 3;
        v[2] = 1;

        for (int i = 0; i < n; ++i)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/59491087