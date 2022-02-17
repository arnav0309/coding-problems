//https://leetcode.com/problems/dungeon-game/
   
#include <bits/stdc++.h>
using namespace std;

#define ff                 first
#define ss                 second
#define ll                 long long int
#define ld                 long double
#define pb                 push_back
#define mp                 make_pair
#define pii                pair<ll, ll>
#define vi                 vector<ll>
#define vs                 vector<string>
#define mii                map<ll, ll>
#define ump                unordered_map<ll, ll>
#define all(n)			   n.begin(),n.end()
#define mid(l,r)           (l+(r-l)/2)
#define pq_max             priority_queue<ll>
#define pq_min             priority_queue<int, vi, greater<ll> >
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define mod                1000000007
#define inf                1e18
#define ps(x, y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)     type *arr = new type[n];
#define w(x)               int x; cin>>x; while(x--)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)

void file_i_o(){
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   #ifndef ONLINE_JUDGE
       freopen("C:\\Users\\arnav\\Desktop\\InputOutput\\input.txt", "r", stdin);
        freopen("C:\\Users\\arnav\\Desktop\\InputOutput\\output.txt", "w", stdout);
    #endif 
}     

class Solution {
public:
    int calculateMinimumHP(std::vector<std::vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        std::vector<std::vector<int> > dp(n+1, std::vector<int> (m+1, INT_MAX));
        
        for(int i = n-1; i >= 0; i--) {
            for(int j = m-1; j >= 0; j--) {
                if(i == n-1 and j == m-1) {
                    dp[i][j] = 1 - arr[i][j];
                    dp[i][j] = (dp[i][j] <= 0) ? 1 : dp[i][j];
                    continue;
                }
                dp[i][j] = std::min(dp[i+1][j], dp[i][j+1]) -  arr[i][j];
                dp[i][j] = (dp[i][j] <= 0) ? 1 : dp[i][j];
            }
        }
        
        return dp[0][0];
    }
};



int main(int argc, char const *argv[])
{

	
	file_i_o();
	
	w(t){

	/* Write Code Here */
		
	}

	return 0;

}