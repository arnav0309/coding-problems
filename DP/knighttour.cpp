   
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




bool isSafe(int i, int j, std::vector<std::vector<int> > &b, int n) {
    return i >= 0 and j >= 0 and i < n and j < n and b[i][j] == -1;
}

int dirx[] = {2,1,-2,-1, 2, 1,-2,-1};
int diry[] = {1,2, 1, 2,-1,-2,-1,-2};

bool tour(std::vector<std::vector<int> > &b, int n, int i, int j, int c) {
    if(c == n*n) {
        return true;
    }
    for(int d = 0; d < 8; d++) {
        if(isSafe(i+dirx[d], j+diry[d], b, n)) {
            b[i+dirx[d]][j+diry[d]] = c;
            if(tour(b, n, i+dirx[d], j+diry[d], c+1)) return true;
            else b[i+dirx[d]][j+diry[d]] = -1;
        }
    }
    return false;
}

int main(int argc, char const *argv[]) {
    clock_t begin = clock();
    file_i_o();
    // Write your code here....
    std::vector<std::vector<int> > b(5, std::vector<int> (5, -1));
    b[0][0] = 0;
    if(tour(b, 5, 0, 0, 1)) {
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                std::cout<<b[i][j]<<" ";
            }
            std::cout<<"\n";
        }
        std::cout<<"Yes a tour\n";
    } else {
        std::cout<<"No tour\n";
    }

    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;
}