// https://www.codechef.com/START24C/problems/ORANDCON

// Yet Another Constructive Problem

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        int a, b, c;
        a = x;
        b = 0;
        for (int c = x + 1; c < 1000000000; c++)
        {

            int A = a | b;
            int B = b | c;
            int C = c | a;

            int R = A & B & C;
            if (R == x)
            {
                cout << a << " " << b << " " << c << endl;
                break;
            }
        }
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57632678

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int a = x;
        int b = x | (1 << 28);
        int c = x | (1 << 29);

        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57652885