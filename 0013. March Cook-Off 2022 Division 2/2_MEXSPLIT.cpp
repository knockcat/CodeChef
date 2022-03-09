// https://www.codechef.com/COOK139B/problems/MEXSPLIT

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
        int cnt = 0;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] == 0)
                ++cnt;
        }

        cout << max(cnt, n - cnt) << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/59744837