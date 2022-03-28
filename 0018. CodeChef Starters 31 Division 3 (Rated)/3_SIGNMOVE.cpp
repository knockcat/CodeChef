// https://www.codechef.com/START31C/problems/SIGNMOVE

// Sign Moves

#include <iostream>
using namespace std;

int main() {
	// KNOCKCAT
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    int t = (n+1)/2;
	    if(n % 2 != 0)
	        t = -t;
	   cout<<t <<endl; 
	   
	}
	
	
	
	return 0;
}


// Solution Link

// https://www.codechef.com/viewsolution/61157205

// this solution is the reason for plagiarism