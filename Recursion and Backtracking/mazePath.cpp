// you are given a 2D matrix of n*m. you will start from left cell and you want  to go to
// bottom right. At each point you can move either right or down . print and count all
// possible path.

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


int totalnoofpath = 0;
void mazepath(int i, int j, int n, int m, string osf)
{
	if(i==n-1&j==m-1)
	{
       totalnoofpath+=1;
       cout<<osf<<endl;

       return;
	}
	if(i>=n||j>=m)
	{
		return;
	}
	mazepath(i+1, j, n, m, osf+"D");
	mazepath(i,j+1,n,m,osf+"L");
}

int main(int argc, char const *argv[])
{
	 //file_i_o();
	mazepath(0,0,3,3,"");
	cout<<"Total no. of path = "<<totalnoofpath;
	return 0;
}