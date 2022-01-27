// https://www.codechef.com/problems/SUBARRAYXOR

// Non Zero Subarray Xor

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,  res = 0;
        cin >>n;
        
        vector<int> v(n);
        int a = 0, b = 1;
        
        for(int i = 0 ; i<n; i++)
        {
            res = a^b;
            v[i] = res;
            // cout << v[i] << " ";
            a = b++;
            cout<<a <<" " <<b<<endl;
        }
        cout<<endl;
    }
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57232052