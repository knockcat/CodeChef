// https://www.codechef.com/problems/PREZ/

// Prefix Zeros 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        string s;

        cin >> n >> k;

        cin >> s;

        int low = 0;
        int high = n + 1;

        while (high - low > 1)
        {
            int mid = (high + low) / 2;

            int ops = 0;

            for (int i = mid - 1; i >= 0; i--)
            {
                int req = (ops + s[i] - '0') % 10;
                if (req != 0)
                    ops += 10 - req;
            }

            if (ops <= k)
                low = mid;
            else
                high = mid;
        }

        cout << low << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57418269