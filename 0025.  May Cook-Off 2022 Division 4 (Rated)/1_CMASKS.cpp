// https://www.codechef.com/COOK141D/problems/CMASKS

// Chef and Masks

#include <iostream>
using namespace std;

int main()
{
    // KNOCKCAT

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int x, y;
        cin >> x >> y;

        if (y * 10 == x * 100)
            cout << "Cloth" << endl;
        else if (x * 100 < y * 10)
            cout << "Disposable" << endl;
        else
            cout << "Cloth" << endl;
    }
    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/64012339