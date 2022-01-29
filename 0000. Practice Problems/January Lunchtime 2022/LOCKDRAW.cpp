// https://www.codechef.com/LTIME104C/problems/LOCKDRAW

// Chef and Lockout Draws

#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c || a + c == b || c + b == a)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// Solution link

https: // www.codechef.com/viewsolution/57306993