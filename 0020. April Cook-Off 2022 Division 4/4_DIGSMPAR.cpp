// https://www.codechef.com/COOK140D/problems/DIGSMPAR

// Digit Sum Parities

#include <iostream>
using namespace std;

void solve();
void first(int &, int &, int &);
void next(int &, int &, int &);

int main()
{
    // KNOCKCAT

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int num;
    cin >> num;

    int t = num, s = 0;
    while (num > 0)
    {
        s += num % 10;
        num /= 10;
    }

    if (s % 2 == 0)
    {
        first(s, num, t);
    }
    else
    {
        next(s, num, t);
    }
}

void first(int &s, int &num, int &t)
{
    while (s % 2 != 1)
    {
        t += 1;
        num = t;
        s = 0;
        while (num > 0)
        {
            s += num % 10;
            num /= 10;
        }
    }
    cout << t << endl;
}
void next(int &s, int &num, int &t)
{
    while (s % 2 != 0)
    {
        t += 1;
        num = t;
        s = 0;
        while (num > 0)
        {
            s += num % 10;
            num /= 10;
        }
    }
    cout << t << endl;
}

// Solution Link

// https://www.codechef.com/viewsolution/61889388