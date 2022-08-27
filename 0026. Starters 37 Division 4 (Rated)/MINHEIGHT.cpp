#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int x, h;
        cin >> x >> h;
        if (x >= h)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}