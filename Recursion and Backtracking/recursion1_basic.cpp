#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
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
//mt19937                    rng(chrono:steady_clock::now.time_since_epoch().count());
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void file_i_o(){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}     
//factorial
// int facto(int n){
// 	if(n==1){
// 		return 1;
// 	}
// 	int ans = facto(n-1);
// 	return n*ans;
// }
//fibonacii
// int fibonacii(int n)
// {
// 	if(n==1) return 0;
// 	if(n==2) return 1;
// 	return fibonacii(n-1)+fibonacii(n-2);
// }

//Given a value n, how many binary strings of length n are there with no consecutive ones.


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for (int i = 1; i<=n; i++)
	{
		/* code */
		cout<<fibonacii(i)<<" ";
	}
	

	return 0;
}