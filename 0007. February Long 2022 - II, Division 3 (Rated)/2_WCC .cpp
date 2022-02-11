// https://www.codechef.com/FEB222C/problems/WCC

// World Chess Championship

#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        string str;
        cin >> str;
        int c = 0, n = 0, d = 0;
        for (int i = 0; i < 14; ++i)
        {
            if (str[i] == 'C')
                ++c;
            else if (str[i] == 'N')
                ++n;
            else
                ++d;
        }

        c *= 2 + d;
        n *= 2 + d;

        // cout<<c <<" "<<n<<endl;

        if (c > n)
            cout << 60 * x << endl;
        if (c < n)
            cout << 40 * x << endl;
        if (c == n)
            cout << 55 * x << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/58216024