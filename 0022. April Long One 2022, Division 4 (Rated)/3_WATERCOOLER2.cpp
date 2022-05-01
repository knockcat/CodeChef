// https://www.codechef.com/APRIL221D/problems/WATERCOOLER2

// The Cooler Dilemma 2

#include <iostream>
using namespace std;

void knock()
{
    int a, b;
    cin >> a >> b;

    if (b % a != 0)
        cout << b / a << endl;
    else
        cout << b / a - 1 << endl;
}

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;

    while (t--)
        knock();
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/62420431