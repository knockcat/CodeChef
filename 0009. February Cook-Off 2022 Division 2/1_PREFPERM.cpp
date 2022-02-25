// https://www.codechef.com/COOK138B/problems/PREFPERM

// Prefix Permutation

#include <iostream>
#include <vector>
#include <algorithm>
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
        vector<int> v(k);

        for (int i = 0; i < k; ++i)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        vector<int> ans;
        int ind = 0;

        for (int i = 0; i < k; ++i)
        {
            for (int j = v[i]; j > ind; --j)
                ans.push_back(j);
            ind = v[i];
        }

        for (int i = 0; i < ans.size(); ++i)
            cout << ans[i] << " ";

        cout << endl;
    }

    return 0;
}

// SOLUTION LINK

// https://www.codechef.com/viewsolution/58803452