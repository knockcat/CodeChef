// https://www.codechef.com/FEB222C/problems/NOFIX

// Avoid Fixed Points

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; ++i)
            cin >> v[i];
        int k = 0;
        int t = 0;
        for (int i = 0; i < n; ++i)
        {
            t = i + k + 1;
            if (v[i] == t)
                ++k;
        }
        cout << k << endl;
    }
    return 0;
}

// Solution Link

https: // www.codechef.com/viewsolution/58218364