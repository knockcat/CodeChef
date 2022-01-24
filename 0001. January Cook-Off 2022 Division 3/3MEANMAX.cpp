// https://www.codechef.com/COOK137C/problems/MEANMAX

// Mean Maximization Problem Code: MEANMAX

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    int arr[N],sum = 0;
	    
	    for(int i = 0; i<N; i++)
	    {
	        cin >> arr[i];
	        sum += arr[i];
	    }
	        
	       int max  = *max_element(arr, arr+N);
	       double s = (double)(sum - max)/(N-1);
	       
	       s += max;
	       
	       cout << fixed << setprecision(12) << s << endl;
	  
	}
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57025433