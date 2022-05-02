// https://www.codechef.com/LTIME107D/problems/BULLET

// Mario and Bullet

#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d = b / a;

        if (d > c)
            cout << 0 << endl;
        else
            cout << c - d << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/63084291
