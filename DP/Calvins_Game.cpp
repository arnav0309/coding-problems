//https://www.codechef.com/INOIPRAC/problems/INOI1301
   
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
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   #ifndef ONLINE_JUDGE
       freopen("C:\\Users\\arnav\\Desktop\\InputOutput\\input.txt", "r", stdin);
        freopen("C:\\Users\\arnav\\Desktop\\InputOutput\\output.txt", "w", stdout);
    #endif 
}     




int main(int argc, char const *argv[])
{

	
	file_i_o();

	clock_t start, end;
    start = clock();

	

	/* Write Code Here */
		ll n,k;
		cin>>n>>k;
		vi v(n+1);
		for(ll i=1;i<=n;i++){
			cin>>v[i];
		}
		vi forw(n+1,0);
		vi back(n+1,0);
		
		forw[k+1]=v[k+1];
		
		for(ll i=k+2;i<=n;i++){
			forw[i]=max(forw[i-1],forw[i-2])+v[i];
		}
		back[1]=v[1];
		back[2]=v[1]+v[2];
		for(ll i=3;i<=n;i++){
			back[i]=max(back[i-1],back[i-2])+v[i];
		}
		ll ans = -inf;
		for(ll i=1;i<=n;i++){
			ans=max(ans,forw[i]+back[i]-v[i]);
		}
		cout<<ans<<endl;
	

	end = clock();
	
	double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cerr<<"\nTime : "<<fixed<<time_taken<<setprecision(5)<<" s \n";

	return 0;

}