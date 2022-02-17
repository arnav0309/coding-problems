   
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
#define all(n)               n.begin(),n.end()
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
#define loop(i,a,b)     for(int i=(a);i<=(b);i++)

void file_i_o(){
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   #ifndef ONLINE_JUDGE
       freopen("C:\\Users\\arnav\\Desktop\\InputOutput\\input.txt", "r", stdin);
        freopen("C:\\Users\\arnav\\Desktop\\InputOutput\\output.txt", "w", stdout);
    #endif 
}     




std::vector<std::list<int> > graph;

bool has_path(int start, int end, std::vector<bool> &visited) {
    if(start == end) return true;
    visited[start] = true;
    for(auto &neighbour : graph[start]) {
        if(not visited[neighbour]) {
            bool result = has_path(neighbour, end, visited);
            if(result) return true;
        }
    }
    return false;
}

std::vector<std::vector<int> > result;

void all_path(int start, int end, std::vector<bool> &vis, std::vector<int> &path) {
    if(start == end) {
        path.pb(end);
        result.pb(path);
        path.pop_back();
        return;
    }
    path.pb(start);
    vis[start] = true;
    for(auto &neighbour : graph[start]) {
        if(not vis[neighbour]) {
            all_path(neighbour, end, vis, path);
        }
    }
    vis[start] = false;
    path.pop_back();
}

int main(int argc, char const *argv[]) {
    clock_t begin = clock();
    file_i_o();
    // Write your code here....
    int v;
    std::cin>>v;
    graph.resize(v, std::list<int>());
    int e;
    std::cin>>e;
    while(e--) {
        int u, v;
        std::cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    std::vector<bool> visited(v, false);
    std::vector<int> path;
    // std::cout<<(has_path(0, 5, visited) ? "Yes" : "No");
    all_path(0, 5, visited, path);
    for(auto p : result) {
        logarr(p, 0, p.size() - 1);
    }
    // logarr(path, 0, path.size() - 1);

    return 0;

}