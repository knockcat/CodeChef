// https://www.codechef.com/CCSTART2/problems/TRIVALCH

// Valid Triangle Or Not

#include <bits/stdc++.h>
using namespace std;

int main()
{

    float a, b, c;
    cin >> a >> b >> c;
    // cout<<a <<" "<<b<< " " << c <<endl;

    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        if (area > 0)
            cout << "YES" << endl;
    }
    else
        cout << "NO";

    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57278655