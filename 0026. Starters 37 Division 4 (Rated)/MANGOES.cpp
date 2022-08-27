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
        int ind = 1;
        while ((x * ind + y) <= z)
        {
            ++ind;
        }
        cout << ind - 1 << endl;
    }
    return 0;
}