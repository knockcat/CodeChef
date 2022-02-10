// https://www.codechef.com/START25C/problems/POLIN

#include <iostream>
#include <set>
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

        int x[n];
        int y[n];

        for (int i = 0; i < n; ++i)
            cin >> x[i] >> y[i];

        set<int> s1;
        set<int> s2;

        for (int i = 0; i < n; ++i)
        {
            s1.insert(x[i]);
            s2.insert(y[i]);
        }

        cout << s1.size() + s2.size() << endl;
    }
    return 0;
}

// Solution Link

// https: // www.codechef.com/viewsolution/58154999