// https://www.codechef.com/LTIME104C/problems/SUBSTADD

// Chef and Subset Additions

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;

        cin >> n >> x >> y;

        vector<int> v(n), v1(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if ((v[i] + x == v1[i]) || (v[i] + y == v1[i]))
                continue;
            else
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        /*
        for(int i = 0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }

        cout<<"\n";

        for(int i = 0; i<n; i++)
        {
            cout<<v1[i]<<" ";
        }
        */
    }

    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57347063