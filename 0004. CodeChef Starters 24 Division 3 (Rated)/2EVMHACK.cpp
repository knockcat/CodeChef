// https://www.codechef.com/START24C/problems/EVMHACK

// EVM Hacking

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;

        int sum1 = p + b + c;
        int sum2 = a + q + c;
        int sum3 = a + b + r;

        int lhs = max(max(sum1, sum2), sum3);

        float rhs = (p + q + r) / 2;

        if (lhs > rhs)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57586630