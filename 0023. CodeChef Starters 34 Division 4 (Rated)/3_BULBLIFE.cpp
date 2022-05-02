// https://www.codechef.com/START34D/problems/BULBLIFE

// Good Quality Bulbs

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n - 1);
        for (int i = 0; i < v.size(); ++i)
            cin >> v[i];

        int sum = accumulate(v.begin(), v.end(), 0);

        int y = n * x - sum;
        if (y < 0)
            cout << 0 << endl;
        else
            cout << y << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/62797014