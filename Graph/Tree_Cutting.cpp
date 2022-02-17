//https://codeforces.com/contest/1118/problem/F1
   
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




int red = 0, blue = 0;
int ans = 0;
std::vector<int> color;
std::vector<std::list<int> > graph;

std::pair<int, int> travel(int node, int parent = -1) {
    std::pair<int, int> my_ans(0, 0);

    for(auto &neighbour : graph[node]) {
        if(neighbour == parent) continue;
        std::pair<int, int> n_ans = travel(neighbour, node);
        ans += (n_ans.ff == 0 and n_ans.ss == blue);
        ans += (n_ans.ff == red and n_ans.ss == 0);
        my_ans.ff += n_ans.ff;
        my_ans.ss += n_ans.ss;
    }
    if(color[node] == 1) my_ans.ff++;
    else if(color[node] == 2) my_ans.ss++;
    return my_ans;
}

int main(int argc, char const *argv[]) {
    clock_t begin = clock();
    file_i_o();
    // Write your code here....

    int n;
    std::cin>>n;
    color.resize(n);
    graph.resize(n, std::list<int>());
    for(int i = 0 ; i < n; i++) {
        std::cin>>color[i];
        red += (color[i] == 1);
        blue += (color[i] == 2);
    }

    for(int i = 0; i < n-1; i++) {
        int u, v;
        std::cin>>u>>v;
        u--;
        v--;
        graph[u].pb(v);
        graph[v].pb(u);
    }

    travel(0);
    std::cout<<ans<<"\n";


	return 0;

}