// https://www.codechef.com/COOK140D/problems/CHEFPAGES

// Important Pages on CodeChef

#include <iostream>
using namespace std;

void solve();

int main()
{
    // KNOCKCAT

    solve();

    return 0;
}

void solve()
{
    int A, B;
    cin >> A >> B;

    if (A == 1 and B == 1)
        cout << "https://discuss.codechef.com" << endl;
    else if (A == 0)
        cout << "https://www.codechef.com/practice" << endl;
    else if (A == 1 and B == 0)
        cout << "https://www.codechef.com/contests" << endl;
}

// Solution Link

// https://www.codechef.com/viewsolution/61882511