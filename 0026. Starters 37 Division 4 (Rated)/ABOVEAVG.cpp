#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        long n, m, x;
        cin >> n >> m >> x;

        int ind = n * x;
        int vs = 1;
        if (x == m)
            cout << 0 << endl;
        else
        {
            // while(ind / vs > x)
            // {
            //     ++vs;
            // }
            // cout<<vs-1<<endl;
            x = x + 1;
            cout << ind / x << endl;
        }
    }
    return 0;
}