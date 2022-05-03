// https://www.codechef.com/COOK141D/problems/LEAGUE

// Farmers League

#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT

    long t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        long n;
        cin >> n;

        cout << ((n - 1) * 3) - (((n - 1) / 2) * 3) << endl;
    }
    return 0;
}

// Solution Link

https: // www.codechef.com/viewsolution/64019324