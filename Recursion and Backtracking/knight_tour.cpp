/* problem statement*/
/* Given a n*n board with a knight placed at(0,0). Check if the knight can cover 
   all the cells of the boards, using it's usual chess moves without visiting any
   cell twice. */

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
   

   void display(vector<vector<int> > &grid, int n)
   {
     for(int i=0;i<n;i++){
     	for(int j=0;j<n;j++){
     		cout<<grid[i][j]<<" ";
     	}
     	cout<<endl;
     }

   }


   bool isItSafe(vector<vector<int> > &grid,int n, int i,int j, vector<vector<bool> > &visited){
   	    return i>=0 and j>=0 and i<n and j<n and visited[i][j]==false;
   }

   void knightTour(vector<vector<int> > &grid,int n, int i,int j,int count, vector<vector<bool> > &visited){
   	if(count==n*n-1){
       
       grid[i][j] = count;
       display(grid,n);
       cout<<"\n\n";
       return;
   	}

   	if(count>=n*n) return;
     

   	int xdir[8] = {-2,-2,-1,-1,2,2,1,1};
   	int ydir[8] = {1,-1,2,-2,1,-1,2,-2};
   	visited[i][j]= true;
   	grid[i][j] = count;
   	for(int k=0;k<8;k++)
   	{
   		if(isItSafe(grid,n,i+xdir[k],j+ydir[k],visited)){
   			
   			knightTour(grid,n, i+xdir[k],j+ydir[k], count+1,visited);
   		}
   	}
   	grid[i][j] = -1;
   	visited[i][j] = false;
   }


int main(int argc, char const *argv[])
{
	
	file_i_o();

	clock_t start, end;
    start = clock();

	int n;
	cin>>n;
	vector<vector<int> > grid(n,vector<int>(n,-1));
	vector<vector<bool> > visited(n,vector<bool>(n,false));
	knightTour(grid,n,0,0,0,visited);

	end = clock();
	
	double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cerr<<"\nTime : "<<fixed<<time_taken<<setprecision(5)<<" s \n";

	return 0;

}