// https://www.codechef.com/START32D/problems/BSCOST

// Binary String Cost

#include <iostream>
#include <unordered_map>

using namespace std;

void solve()
{
    int num;
    int cost_of_x;
    int cost_of_y;
    cin >> num >> cost_of_x >> cost_of_y;
    string vs;
    cin >> vs;
    unordered_map<char, int> mp;
    for (int i = 0; i < vs.length(); ++i)
        ++mp[vs[i]];

    if (mp['0'] == vs.length())
        cout << "0" << endl;
    else if (mp['1'] == vs.length())
        cout << "0" << endl;
    else
    {
        if (cost_of_x < cost_of_y)
            cout << cost_of_x << "\n";
        else
            cout << cost_of_y << "\n";
    }
}

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/61691117