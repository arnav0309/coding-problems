   
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
    
    vector<list<int>>graph;
    
    void bfs(int a,vector<bool>& visited){
    	visited[a]=true;
    	vector<int>q;
    	q.push_back(a);
    	while(!q.empty()){
    		int x=q.front();
    		cout<<x<<" ";
    		q.erase(q.begin());
    		for(auto it:graph[x]){
    			if(!visited[it]){
    				q.push_back(it);
    				visited[it]=true;
    			}
    		}
    	}

    }

int main(int argc, char const *argv[])
{

	
	file_i_o();
	
	int v;
	cin>>v;
	graph.resize(v,list<int>());
	vector<bool>visited(v+6,false);
	int e;
	cin>>e;
	while(e--){
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		//graph[v].push_back(u);//for undirected
	}
	bfs(0,visited);

	return 0;

}