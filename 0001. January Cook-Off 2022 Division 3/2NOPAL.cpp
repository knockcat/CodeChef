// https://www.codechef.com/COOK137C/problems/NOPAL

// Palindromes Not Allowed      Problem Code: NOPAL

#include <iostream>
using namespace std;
const int MAX_SIZE = 26;
int main() {
		int N, t;
	cin>>t;
	
	while(t--)
	{
	    cin>>N;
	    char letters[MAX_SIZE] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        string s = "";
        int j = 0;
        for(int i = 0; i< N; i++)
        {
            s += letters[j];
            j++;
            if(j == 26)
            {
                j = 0;
            }
            
        }
        cout<<s<<endl;
	}
	
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/56947359

