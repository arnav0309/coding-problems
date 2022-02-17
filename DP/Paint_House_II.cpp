//https://www.lintcode.com/problem/516/
   
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




#include <bits/stdc++.h>
#define ll   long long int
class Solution {
public:
    /**
     * @param costs: n x k cost matrix
     * @return: an integer, the minimum cost to paint all houses
     */
     ll fun(vector<vector<int>> &costs){
         int n = costs.size();
         int k = costs[0].size();
         
         vector<vector<ll>> dp(n,vector<ll>(k,INT_MAX));
         for(int i=0;i<k;i++){
             dp[0][i]=costs[0][i];
         }
         for(int i=1;i<n;i++){
             for(int j = 0;j<k;j++){
                 for(int z=0;z<k;z++){
                     if(z==j) continue;
                     dp[i][j]=min(dp[i][j],costs[i][j]+dp[i-1][z]);
                 }
                 
             }
         }
         ll ans = INT_MAX;
         for(int i=0;i<k;i++){
          ans=min(ans,dp[n-1][i]);
         }
         return ans;
     }
    int minCostII(vector<vector<int>> &costs) {
        // write your code here
        if (costs.size()==0) return 0;
        return (int)fun(costs);
    }
};