// https://www.codechef.com/FEB222C/problems/HELIUM3

// Chef and NextGen

#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (x * y >= a * b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/58211984