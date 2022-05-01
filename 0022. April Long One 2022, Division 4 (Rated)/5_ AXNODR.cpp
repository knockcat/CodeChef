// https://www.codechef.com/APRIL221D/problems/AXNODR

// Dazzling AXNODR Challenge

#include <iostream>
using namespace std;

void solve()
{

    long long n;
    cin >> n;

    if (n % 4 == 0)
        cout << n + 3 << endl;
    else if (n % 4 == 1)
        cout << n << endl;
    else
        cout << "3" << endl;
}

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;

    while (t--)
        solve();
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/62526334