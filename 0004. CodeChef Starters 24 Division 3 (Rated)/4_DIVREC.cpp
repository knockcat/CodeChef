// https://www.codechef.com/problems/DIVREC

#include <iostream>
using namespace std;

int main()
{
    // Knockcat
    int t;
    cin >> t;

    while (t--)
    {
        long long x, a, b, n;
        cin >> x >> a >> b;

        if (x % a != 0 || (a == 1 && x != 1))
        {
            cout << -1 << endl;
            continue;
        }

        n = x / a;
        n = n * b;
        cout << n << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57683033