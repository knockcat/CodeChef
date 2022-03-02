// https://www.codechef.com/LTIME105B/problems/DISTCON

// Four Equidistant Points on a Grid

#include <iostream>
using namespace std;

int main()
{

    int d;
    cin >> d;

    if (d % 2)
        cout << -1 << endl;

    else
    {
        int x[4][2] = {{0, 0}, {1, 1}, {1, -1}, {2, 0}};
        d = d / 2;
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                x[i][j] *= d;
                cout << x[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/59347086