// https://www.codechef.com/COOK140D/problems/DIGARR

// Rearranging digits to get a multiple of 5

#include <iostream>
using namespace std;

void solve();

int main()
{
    // KNOCKCAT

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    string ind;
    cin >> ind;

    bool check = 0;
    for (auto i : ind)
    {
        if (i == '0' or i == '5')
            check = true;
    }

    if (check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

// Solution Link

// https://www.codechef.com/viewsolution/61884054