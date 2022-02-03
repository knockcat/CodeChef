// https://www.codechef.com/START24C/problems/AVOIDCONTACT

// Avoid Contact

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;

        cin >> x >> y;

        int safe = x - y;

        if (x == y)
            cout << (safe * 1 + y * 2) - 1 << endl;
        else
            cout << safe * 1 + y * 2 << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57525811