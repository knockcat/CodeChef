// https://www.codechef.com/START34D/problems/EXPIRY

// Expiring Bread

#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if (n <= m * k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/62773695