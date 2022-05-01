// https://www.codechef.com/APRIL221D/problems/WATERCOOLER1

// The Cooler Dilemma 1

#include <iostream>
using namespace std;

void knock();

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;
    while (t--)
        knock();
    return 0;
}

void knock()
{
    int a, b, mon;

    cin >> a >> b >> mon;

    int ind = a * mon;

    if (ind < b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

// Solution Link

// https://www.codechef.com/viewsolution/62419252