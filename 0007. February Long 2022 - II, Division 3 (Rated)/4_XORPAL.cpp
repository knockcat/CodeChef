// https://www.codechef.com/FEB222C/problems/XORPAL

// Xor Palindrome

#include <iostream>
#include <string.h>
using namespace std;

bool xorPalindrome(string);

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (xorPalindrome(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

bool xorPalindrome(string str)
{
    int zcnt = 0, ocnt = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '0')
            ++zcnt;
        else
            ++ocnt;
    }

    if (str.length() & 1)
        return true;
    else
    {
        if (zcnt == ocnt)
            return true;
        else if (zcnt % 2 == 0 and ocnt % 2 == 0)
            return true;
        else
            return false;
    }
    return false;
}

// Solution Link

// https://www.codechef.com/viewsolution/58221877