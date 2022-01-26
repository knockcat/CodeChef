// https://www.codechef.com/START23C/problems/AVGOF3

// Average of Three

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>> n;
	    
	    if(n == 0)
	        cout<<"0"<<" "<<0<<" "<<0;
	    else
	    {
	        cout<<n-1<<" "<<n<<" "<<n+1<<endl;
	    }
	   
	}
	
	
	return 0;
}

// Solution Link

// https://www.codechef.com/viewsolution/57124383