//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/permutation-swaps/

   
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




std::vector<std::list<int> > g;
std::vector<int> idx;
void helper(ll i, std::vector<bool> &vis) {
    vis[i] = true;
    idx.pb(i);
    for(auto neigh : g[i]) {
        if(not vis[neigh]) {
            helper(neigh, vis);
        }
    }

}
int main(int argc, char const *argv[]) {
    clock_t begin = clock();
    file_i_o();
    // Write your code here....

    int t;
    std::cin>>t;
    while(t--) {
        int n, m;
        
        std::cin>>n>>m;
        g.resize(n, std::list<int> ());
        vi p;
        vi q;
        for(int i = 0; i < n; i++) {
            int x;
            std::cin>>x;
            p.pb(x);
        }
        for(int i = 0; i < n; i++) {
            int x;
            std::cin>>x;
            q.pb(x);
        }
        while(m--) {
            int u, v;
            std::cin>>u>>v;
            u--;
            v--;
            g[u].pb(v);
            g[v].pb(u);
        }
        std::vector<bool> vis(n, false);
        ll cc = 0; // no of connected component
         bool flag = true;
        for(int j = 0; j < n; j++) {
            if(not vis[j]) {
                cc++;
                helper(j, vis);
                std::set<int> el;
                for(int i = 0; i < idx.size(); i++) {
                    el.insert(p[idx[i]]);
                }
               
                for(int i = 0; i < idx.size(); i++) {
                    int element = q[idx[i]];
                    if(el.count(element) == 0) {
                        flag = false;
                        break;
                    }
                }
                idx.clear();
                if(!flag) break;
            }
        }
        std::cout<<((flag) ? "YES":"NO")<<"\n";
        g.clear();
    }

	return 0;

}