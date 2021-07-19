//you need to find the sum of maximum of all subarray of a given array.
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

int findMaxSum(int arr[], int n)
{

    int CL[n] = { 0 }, CR[n] = { 0 };

    stack<int> q;

    for (int i = 0; i < n; i++) {
        while (q.size() != 0 && arr[q.top()] <= arr[i]) {
            CL[i] += CL[q.top()] + 1;
            q.pop();
        }
        q.push(i);
    }

    while (q.size() != 0)
        q.pop();
 
    for (int i = n - 1; i >= 0; i--) {
        while (q.size() != 0 && arr[q.top()] < arr[i]) {
            CR[i] += CR[q.top()] + 1;
            q.pop();
        }
        q.push(i);
    }

    while (q.size() != 0)
        q.pop();
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += (CL[i] + 1) * (CR[i] + 1) * arr[i];
 
    return ans;
}
 
int main()
{
    // int arr[] = { 1, 3, 2 };
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    cout << findMaxSum(arr, n);
}