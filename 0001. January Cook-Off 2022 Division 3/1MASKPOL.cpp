// https://www.codechef.com/COOK137C/problems/MASKPOL

// Mask Policy

#include <iostream>
using namespace std;

int main()
{
    int N, A, t;

    cin >> t;
    while (t--)
    {
        cin >> N >> A;
        int uninfected = N - A;
        if (N == A)
        {
            cout << "0" << endl;
        }
        else if (uninfected >= A)
        {
            cout << A << endl;
        }
        else if (A >= uninfected)
        {
            cout << uninfected << endl;
        }
        else if (A == 0)
        {
            cout << "0";
        }
    }
    return 0;
}

// Solution Link

https://www.codechef.com/viewsolution/56911107