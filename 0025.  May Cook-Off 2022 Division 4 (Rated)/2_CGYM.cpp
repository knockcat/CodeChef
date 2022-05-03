// https://www.codechef.com/COOK141D/problems/CGYM

// Chef and Gym

#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (x + y <= z)
            cout << 2 << endl;
        else if (x <= z)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}

// Solution Link

https: // www.codechef.com/viewsolution/64009831