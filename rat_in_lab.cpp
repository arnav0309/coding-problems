// In a lab, there are some rats,each rat has some color.
//some subset of rat (possibly all of them) tells you how many rats have same color as them.
// return the mini. no. of rats that could be present in the lab.

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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	// if(n==0)
	// {
	// 	cout<<"0"<<endl;
	// }
	unordered_map<int,int>um;
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			s+=1;
			continue;
		}
		if(um.find(a[i]) == um.end())
		{
			s+=(a[i]+1);
			um[a[i]]=0;
		}
		else{
			um[a[i]]+=1;
			if(um[a[i]]==a[i]){
				um.erase(a[i]);
			}
		}
	}
	cout<<s<<endl;

	return 0;
}