https://www.codechef.com/problems/EQCARDGAME

/*
Alice has a standard deck of 52 cards. She wants to play a card game with K−1 of her friends. This particular game requires each person to have an equal number 
of cards, so Alice needs to discard a certain number of cards from her deck so that she can equally distribute the remaining cards amongst her and her friends.
Find the minimum number of cards Alice has to discard such that she can play the game.
Note: It doesn't matter which person gets which card. The only thing that matters is that each person should have an equal number of cards.
   
Sample Input 1 :
Testcases :  4
             3
             50
             2
             14

Sample Output 1 :
              1
              2
              0
              10
*/

//CODE

#include <iostream>
using namespace std;

int main() 
{
    int t;
    
	cin>>t;
	
	while(t--){
	    int k,ans = 0;
	    cin>>k;
	    
	    ans = 52 % k;
	    cout<<ans<<endl;
	}
	return 0;
}
