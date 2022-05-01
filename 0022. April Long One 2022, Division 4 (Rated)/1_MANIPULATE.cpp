// https://www.codechef.com/APRIL221D/problems/MANIPULATE

// Ezio and Guards

#include <iostream>
using namespace std;

void knock()
{
    int a, b;
    cin >> a >> b;

    int ind = a - b;

    if (ind >= 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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

// https://www.codechef.com/viewsolution/62418845