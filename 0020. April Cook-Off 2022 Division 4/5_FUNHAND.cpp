// https://www.codechef.com/COOK140D/problems/FUNHAND/

// Funny Hand

#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (a > n or b > n or abs(a - b) > 2 or a == b)
        {
            cout << "0" << endl;
        }
        else
        {
            float p;
            if (a == n or b == n or a == 1 or b == 1 && (abs(a - b) == 1))
            {
                p = (float)1 / n;
                cout << p * n << endl;
                // cout<<p*n<<endl;
            }
            else if (abs(a - b) == 1)
            {
                p = (float)2 / n;
                cout << p * n << endl;
                // cout<<p*n<<endl;
            }
            else if (abs(a - b) == 2)
            {
                p = (float)1 / n;
                cout << p * n << endl;
                // cout<<p*n<<endl;
            }
        }
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/61858769