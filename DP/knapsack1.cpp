   
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




istd::vector<ll> wt;
std::vector<ll> c;
ll dp[105][100005];

ll knapsack(int i, int W, int n) {
    if(i == n) return 0;
    if(W <= 0) return 0;
    if(dp[i][W] != -1) return dp[i][W];
    // pick
    ll result = 0;
    ll f1 = 0;
    if(wt[i] <= W) {
        f1 = c[i] + knapsack(i+1, W - wt[i], n);
    }
    ll f2 = knapsack(i+1, W, n);
    result = std::max(f1, f2);

    return dp[i][W] = result;
}

ll knapsackBU(int W, int n) {
    std::vector<std::vector<ll> > dp(n+1, std::vector<ll> (W+1, 0));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= W; j++) {
            dp[i][j] = dp[i-1][j]; // not pick
            if(wt[i] <= j) {
                dp[i][j] = std::max(dp[i][j], c[i] + dp[i-1][j-wt[i]]);
            }
        }
    }
    return dp[n][W];
}

ll knapsackBUbtr(int W, int n) {
    vi dp1(W+1, 0);
    vi dp2(W+1, 0);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= W; j++) {
            dp2[j] = dp1[j];
            if(wt[i] <= j) {
                dp2[j] = std::max(dp1[j], c[i] + dp1[j-wt[i]]);
            }
        }
        dp2.swap(dp1);
        dp2.clear();
    }
    return dp1[W];
}

int main(int argc, char const *argv[]) {
    clock_t begin = clock();
    file_i_o();
    // Write your code here....
    std::memset(dp, -1, sizeof dp);
    int n, W;
    std::cin>>n>>W;
    wt.pb(0);
    c.pb(0);
    loop(i, 0, n-1) {
        ll w, cost;
        std::cin>>w>>cost;
        wt.pb(w);
        c.pb(cost);
    }
    // std::cout<<knapsack(0, W, n);
    std::cout<<knapsackBUbtr(W, n);

	return 0;

}   