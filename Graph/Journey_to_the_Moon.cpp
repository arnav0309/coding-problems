//https://www.hackerrank.com/challenges/journey-to-the-moon/problem
   
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


    vector<list<ll> >graph;
    
    void help(ll i,vector<bool> &visited,ll &size){
      visited[i]=true;
      size++;
      for(auto a : graph[i]){
      	if(not visited[a]){
      		help(a,visited,size);
      	}
      }
    }

    ll dfs(ll n){
    	vector<bool> visited(n,false);
    	ll cc=0;
    	ll ans=(n*(n-1))/2;
    	for(ll i=0;i<n;i++){
    		if(not visited[i]){
    			cc++;
    			ll size=0;
    			help(i,visited,size);
    			ans-=((ll)(size*(size-1)))/2;
    		}
    	}
    	return ans;
    }

int main(int argc, char const *argv[])
{

	
	file_i_o();
	
	int n,p;
	cin>>n>>p;
	graph.resize(n,list<ll>());
    while(p--){
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);//for undirected
	}
	cout<<dfs(n)<<endl;
	return 0;

}