#include <bits/stdc++.h>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        long n, x;
        cin >> n >> x;
        long vs = 0, ind = 0;
        vector<long> v(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            ind += ceil((double)v[i] / x);
            vs = max(v[i], vs);
        }

        cout << min(vs, ind) << endl;
    }
    return 0;
}