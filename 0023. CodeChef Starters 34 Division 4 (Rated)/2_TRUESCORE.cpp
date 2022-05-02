// https://www.codechef.com/START34D/problems/TRUESCORE

// Is the Score Consistent

#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c, d;
        cin >> c >> d;

        if (c >= a && d >= b)
            cout << "POSSIBLE" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/62786880