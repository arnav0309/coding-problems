//for a given array you will have to find maximum of every subarray of size k. k will be given.

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


int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	deque<int> dq;
	for(int i=0;i<k;i++)
	{
		while(!dq.empty() && a[dq.back()]<a[i]){
			dq.pop_back();
		}
		dq.push_back(i);
	}
	cout<<a[dq.front()]<<endl;
	for (int i = k; i < n; ++i)
	{
		while(!dq.empty() && a[dq.back()]<a[i]){
			dq.pop_back();
		}
		while(i-dq.front()+1>k){
			dq.pop_front();
		}
		dq.push_back(i);
		cout<<a[dq.front()]<<endl;
	}

	return 0;
}