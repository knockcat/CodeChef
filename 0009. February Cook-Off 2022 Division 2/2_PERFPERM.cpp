// https://www.codechef.com/COOK138B/problems/PERFPERM

// Perfect Permutation

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
        int n, k;
        cin >> n >> k;
        vector<int> v;

        for (int i = 1; i <= n; ++i)
            v.push_back(i);

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        if (k == n - 1)
        {
            swap(v[0], v[1]);
            for (int i = 0; i < v.size(); ++i)
                cout << v[i] << " ";
            cout << endl;
            continue;
        }

        int per = 0;

        k = n - k;

        for (int i = k; i > 0; --i)
        {
            swap(v[per], v[per + 1]);
            ++per;
        }
        for (int i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}

// SOLUTION LINK

// https://www.codechef.com/viewsolution/58824093