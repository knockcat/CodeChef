// https://www.codechef.com/START28B/problems/SUNDAY

// Count the Holidays

#include <iostream>
#include <vector>
#include <set>
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

        set<int> s;

        for (int i = 1; i <= 30; ++i)
        {
            if (i % 7 == 0)
            {
                s.insert(i);
                s.insert(i - 1);
            }
        }

        for (int i = 0; i < n; ++i)
            s.insert(v[i]);

        cout << s.size() << endl;
    }

    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/59440535