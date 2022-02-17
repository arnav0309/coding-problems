//https://www.lintcode.com/problem/892/
   
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

string alienOrder(vector<string> &words) {
      unordered_map<char,int>indegree;
      unordered_map<char,set<char>>g;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                indegree[words[i][j]]=0;
            }
        }

        for(int i=0;i<words.size()-1;i++){
            string curr=words[i];
            string next = words[i+1];
            int cmp = min(curr.size(),next.size());
            for(int j = 0 ; j < cmp; j++) {
            if(curr[j] != next[j]) {
                std::set<char> adj = g[curr[j]];
                if(adj.count(next[j]) == 0) {
                    g[curr[j]].insert(next[j]);
                    indegree[next[j]]++;
                }
                break;
            }
            if(j == cmp-1 and curr.size() > next.size()) return "";
        }
    }
    
        // Topological sorting
        queue<char>qu;
        string str = "";
        for(auto &p : indegree){
            if(p.ss==0){
                qu.push(p.ff);
            }
        }
        while(not qu.empty()){
            char curr = qu.front();
            qu.pop();
            str+=curr;
            for(auto &el:g[curr]){
                indegree[el]--;
                if(indegree[el]==0){
                    qu.push(el);
                }
            }
        }
        return (str.size()==indegree.size()?str:"");
}
