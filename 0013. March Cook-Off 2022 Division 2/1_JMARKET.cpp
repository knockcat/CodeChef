// https://www.codechef.com/COOK139B/problems/JMARKET

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
        int x, a, b, c;
        cin >> x >> a >> b >> c;
        vector<int> v;

        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());

        int total = v[0] * (x - 1) + v[1] * 1;

        cout << total << endl;
    }
    return 0;
}

// Solution Link

https: // www.codechef.com/viewsolution/59705541