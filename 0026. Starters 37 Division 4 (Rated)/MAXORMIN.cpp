#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        int cnt = 0, z = 0;
        int ind;

        for (int i = 0; i < n; ++i)
        {
            cin >> ind;
            if (ind)
                ++z;
            else
                ++cnt;
        }

        if (z > cnt)
            cout << 1 << endl;

        else if (cnt > z)
        {
            if (abs(cnt - z == 1))
            {
                if ((n - 1) % 2)
                    cout << 1 << endl;
                else
                    cout << 0 << endl;
            }
            else
                cout << 0 << endl;
        }
        else
            cout << 1 << endl;
    }
    return 0;
}