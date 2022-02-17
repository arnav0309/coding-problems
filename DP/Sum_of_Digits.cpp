//https://www.spoj.com/problems/CPCRC1C/
   
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

ll pt[12];

ll f(int x) {
    if(x/10 == 0) return ((x)*(x+1))/2;
   string s = std::to_string(x);
    int d = s.size(); // no of digits
    int first = x / pt[d-1];
    ll res = 0;
    ll sum = pt[d-2]*(45)*(d-1);
    loop(i, 0, first - 1) {
        res = res + (i)*pt[d-1] + sum;
    }
    ll restofnumber = x % pt[d-1];
    res += (first)*(1 + restofnumber);
    res += f(restofnumber);
    return res;
}

int main(int argc, char const *argv[]) {
   
    ll a, b;
    pt[0] = 1;
    for(int i = 1; i < 12; i++) {
        pt[i] = pt[i-1]*10;
    }
    int z=0;
    while(z!=-100) {
        cin>>a>>b;
        if(a == -1 and b == -1){
            z= -100;
        }
        cout<<(f(b) - f(a-1))<<"\n";
    }
	
	return 0;

}