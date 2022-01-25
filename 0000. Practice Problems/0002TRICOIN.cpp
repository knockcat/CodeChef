// https://www.codechef.com/problems/TRICOIN

// Coins And Triangle

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, height = 0;
        cin >> n;

        int i = 1, sum = 0;

        while (sum < n)
        {
            sum = i * (i + 1) / 2;

            if (sum <= n)
                height++;
            i++;
        }
        cout<<height<<endl;
    }

    return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57071208


/*
#include<bits/stdc++.h>
typedef long long  ll;
using namespace std;

bool check(ll mid, int n)
{
    return (mid*(mid + 1)/2 <= n );
}

void solve()
{
    ll left = 1, right = 1e5,ans;
    int n;
    ans = -1;
    cin>>n;
    while(left <= right)
    {
        ll mid  = left + (right - left) / 2;
        if(check(mid,n))
        {
            left = mid + 1;
            ans = max(mid,ans);
        }
        else
            right = mid - 1;
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

*/

// Solution Link

// https://www.codechef.com/viewsolution/57073045