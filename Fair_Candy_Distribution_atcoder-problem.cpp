//  https://atcoder.jp/contests/abc208/tasks/abc208_c

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
ll  n,k;
cin>>n>>k;
map<ll,ll>arru;
vector<long long int>arrui(n);
for(long long int a=(long long int)0;a<n;a++){
    cin>>arrui[a];
    arru.insert({arrui[a],a});
}
 
sort(arrui.begin(),arrui.end());
 
map<long long int,long long int>arruia;
for(long long int a=(long long int)0;a<n;a++){
    long long int value=(long long int)k/(long long int)n;
    arruia.insert({arrui[a],value});
}
for(long long int b=0;b<k%n;b++){
    arruia[arrui[b]]++;
}
long long int arruina[n];
for(auto it=arruia.begin();it!=arruia.end();it++){
    
    arruina[arru[it->first]]=arruia[it->first];
}
for(long long int y:arruina){
    cout<<y<<endl;
}
	


	end = clock();
	
	double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cerr<<"\nTime : "<<fixed<<time_taken<<setprecision(5)<<" s \n";

	return 0;

}