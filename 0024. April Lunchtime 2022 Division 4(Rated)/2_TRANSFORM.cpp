// https://www.codechef.com/LTIME107D/problems/TRANSFORM

// Mario and Transformation

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;

    vector<string> v(3);
    v[0] = "HUGE";
    v[1] = "SMALL";
    v[2] = "NORMAL";

    while (t--)
    {
        int x;
        cin >> x;
        int d = x % 3;
        if (d != 0)
            cout << v[d - 1] << endl;
        if (d == 0)
            cout << "NORMAL" << endl;
    }

    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/63080737