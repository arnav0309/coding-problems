// https://atcoder.jp/contests/arc123/tasks/arc123_b

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
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
   /* #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif */
}     


int main(int argc, char const *argv[])
{
	
	file_i_o();

	clock_t start, end;
    start = clock();

	int N;
	cin>>N;
	vector<int> A(N), B(N), C(N);
	for(auto &i: A)  cin>>i;
	for(auto &i: B) cin>>i;
	for(auto &i: C) cin>>i;
	sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());

    int ans = 0, a = 0, b = 0, c = 0;
    while(b < N && c < N){
        if(A[a] >= B[b]){
            b++;
            continue;
        }
        if(B[b] >= C[c]){
            c++;
            continue;
        }
        ans++;
        a++;
        b++;
        c++;
    }
    cout << ans << endl;  

	end = clock();
	
	double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cerr<<"\nTime : "<<fixed<<time_taken<<setprecision(5)<<" s \n";

	return 0;

}