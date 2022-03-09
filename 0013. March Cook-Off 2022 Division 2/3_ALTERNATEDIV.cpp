// https://www.codechef.com/COOK139B/problems/ALTERNATEDIV

// Alternating Divisibility

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
        int ind = 1;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        vector<int> v(n);

        for (int i = 0; i < n - 1; i += 2)
        {
            v[i] = ind;
            v[i + 1] = 2 * ind;
            ind += 2;
        }

        if (n % 2 != 0)
            v[n - 1] = v[n - 2] + 1;

        for (int i = 0; i < n; ++i)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/59751405