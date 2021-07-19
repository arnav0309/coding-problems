// you are given n points (with x and y cordinates).find the count of right angled triangle,
// which we can form such that the base and perpendicular are parallel to x and y axis

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
     
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n][2];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	unordered_map<int,int>xaxis;
	unordered_map<int,int>yaxis;
	for(int i=0;i<n;i++)
	{
		xaxis[a[i][0]]++;
        yaxis[a[i][1]]++;
	}
	int count =0;
	for (int i = 0; i < n; i++) {
  
        if (xaxis[a[i][0]] >= 1 && yaxis[a[i][1]] >= 1) {
            count += (xaxis[a[i][0]] - 1) * (yaxis[a[i][1]] - 1);
        }
    }
    cout<<count<<endl;
	return 0;
}