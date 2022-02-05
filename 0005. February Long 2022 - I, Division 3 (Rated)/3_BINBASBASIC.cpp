// https://www.codechef.com/FEB221C/problems/BINBASBASIC

// Binary Base Basics

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;

	string str;
	cin >> str;

	int len = str.length();
	int r = len - 1, l = 0, cnt = 0;

	while (l < r)
	{
		if (str[l] != str[r])
			cnt++;

		l++;
		r--;
	}

	if (cnt <= k)
	{
		if (len & 1)
			cout << "YES" << endl;
		else if ((k - cnt) % 2 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	else
		cout << "NO" << endl;
}

int main()
{
	// KNOCKCAT

	int t;
	cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}

// solution Link

// https://www.codechef.com/viewsolution/57790897