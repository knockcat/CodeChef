// https://www.codechef.com/LTIME104C/problems/SUBPERM

// Subarray permutations

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (n == 1)
            cout << 1 << endl;

        else if (k == 1)
            cout << -1 << endl;
        else
        {
            for (int i = k; i <= n; i++)
            {
                cout << i << " ";
            }

            for (int i = 1; i < k; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57371582