// https://www.codechef.com/START27B/problems/PRODUCT

// The product mystery

#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    // KNOCKCAT \\

    int t;
    cin >> t;

    while (t--)
    {
        int b, c;
        cin >> b >> c;

        int hcf = __gcd(b, c);

        cout << c / hcf << endl;
    }
    return 0;
}

// SOLUTION LINK

// https: // www.codechef.com/viewsolution/58960970