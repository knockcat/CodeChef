// https://www.codechef.com/START26C/problems/STNGAME

// Stone Game

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// KNOCKCAT \\

void solve()
{
    int n;
    cin >> n;

    string x, y;
    cin >> x >> y;

    string res(2 * n, ' ');
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    reverse(y.begin(), y.end());

    int l = 0;
    int r = 2 * n - 1;

    int la = 0, lb = 0;

    int ra = n - 1, rb = n - 1;

    for (int i = 0; i < 2 * n; i++)
    {
        if (i % 2 == 0)
        {
            if (x[la] < y[lb])
            {
                res[l] = x[la];
                l++;
                la++;
            }
            else
            {
                res[r] = x[ra];
                r--;
                ra--;
            }
        }
        else
        {

            if (y[lb] > x[la]) // bob turn
            {
                res[l] = y[lb];
                l++;
                lb++;
            }
            else
            {
                res[r] = y[rb];
                r--;
                rb--;
            }
        }
    }
    cout << res << endl;
}

int main()
{
    // KNOCKCAT \\

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/58551939