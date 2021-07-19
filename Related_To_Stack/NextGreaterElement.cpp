// for every element you have to find the next greater elemnet
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
#define max                10000

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
	stack<int>st;
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		while(!st.empty() && st.top()<a[i])
		{
			cout<<"nge of "<<st.top()<<" is "<<a[i]<<endl;
			st.pop();
		}
		st.push(a[i]);

	}
	while(!st.empty())
	{
		
		cout<<"nge of "<<st.top()<<" is "<< "-1"<<endl;
		st.pop();
	}

	return 0;
}