// https://www.codechef.com/START27B/problems/STR_REVERSE

// String Reverse

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // KNOCKCAT \\

    long long int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        long long int cnt = 0;

        // cout<<str;
        long long int n = str.length();
        long long int i = 0, j = str.length() - 1;
        while (i < n)
        {
            while (i < n && str[i] != str[j])
            {
                ++i;
                ++cnt;
            }
            ++i;
            --j;
        }
        cout << cnt << endl;
    }
    return 0;
}

// SOLUTION LINK

// https://www.codechef.com/viewsolution/59025113