// https://www.codechef.com/START26C/problems/SMOKE

// Control the Pollution

#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT \\

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int n1 = n;
        int n2 = n;
        int a = 0, b = 0;

        while (n1 > 0)
        {
            n1 -= 100;
            ++a;
        }
        int buspol = a * x;

        while (n2 > 0)
        {
            n2 -= 4;
            ++b;
        }
        int carpol = b * y;

        int pol = 0;
        while (n > 0)
        {
            if (n >= 100)
            {
                pol += x;
                n -= 100;
            }
            else
            {
                pol += y;
                n -= 4;
            }
        }

        cout << min(buspol, min(carpol, pol)) << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/58547838