// https://www.codechef.com/START32D/problems/COURSEREG

// Course Registration

#include <iostream>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ind = b - c;
    if (ind >= a)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}

int main()
{
    // Knockcat
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/61676671