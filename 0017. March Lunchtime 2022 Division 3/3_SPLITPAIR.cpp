// https://www.codechef.com/LTIME106C/problems/SPLITPAIR

// Sad Splits

#include <iostream>
#include <string>
using namespace std;

void solve();

int main() {
	// KNOCKCAT
	
	int t;
	cin >> t;
	while(t--)
	{
        solve();
	}
	
}

void solve()
{
        int i=0; 
        string str; 
        cin>>str; 
        int even=0, odd=0; 
        while(str[i]) 
        {  
            if((str[i]-'0')%2==0)
                even++;        
            else 
                odd++;         
            i++; 
        } 
        if(((str[str.size()-1])-'0')&1) 
        { 
            if(odd>=2) 
                cout << "YES"<<endl;      
            else
                cout << "NO"<<endl; 
        } 
        else
        { 
            if(even>=2) 
                cout << "YES"<<endl; 
            else 
                cout << "NO"<<endl; 
        }  
    
}

// Solution Link

// https://www.codechef.com/viewsolution/60851974