//https://codeforces.com/problemset/problem/1263/D

   
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




ll Get(vi &parent, int a) {
    return parent[a] = ((parent[a] == a) ? a : Get(parent, parent[a]));
}

void Union(vi &parent, vi &rank, ll a, ll b) {
    a = Get(parent, a);
    b = Get(parent, b);
    if(rank[a] == rank[b]) {
        rank[a]++;
    }
    if(rank[a] > rank[b]) {
        parent[b] = a;
    } else {
        parent[a] = b;
    }
}

int main(int argc, char const *argv[]) {
   
    file_i_o();
    // Write your code here....
    int n;
    std::cin>>n;
    vi parent(27);
    vi rank(27, 0);
    loop(i, 0, 26) parent[i] = i;
    std::vector<bool> total(27, false);
    for(int i = 0; i < n; i++) {
        std::string str;
        std::cin>>str;
        for(int j = 0; j < str.size(); j++) {
            total[str[j]-'a'] = true;
            Union(parent, rank, str[0]-'a', str[j]-'a');
        }
    }
    int count = 0;
    for(int i = 0; i < 26; i++) {
        if(total[i] and Get(parent, i) == i) count++;
    }
    std::cout<<count<<"\n";
   

	return 0;

}