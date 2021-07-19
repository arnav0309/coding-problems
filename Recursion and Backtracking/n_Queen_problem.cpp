 // problem statement
// Given a n*n board, find the number of ways to place N queens , 
//so that no queen attacks others 

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


int queencount = 0;
	bool isItSafe(vector<vector<bool> > &grid,int row,int col,int n)
	{
		for(int i=row-1;i>=0;i--)
		{
			if(grid[i][col]) return false;
		}
		for(int i=row-1,j=col-1;i>=0 and j>=0;i--,j--)
		{
			if(grid[i][j]) return false;
		}
		for(int i=row-1,j=col+1;i>=0 and j<n;i--,j++)
		{
			if(grid[i][j]) return false;
		}
		return true;
	}


   void display(vector<vector<bool> > &grid, int n)
   {
     for(int i=0;i<n;i++){
     	for(int j=0;j<n;j++){
     		if(grid[i][j]){
     			cout<<"Q ";
     		}
     		else{
     			cout<<". ";
     		}
     	}
     	cout<<endl;
     }

   }

	void countNQueen(vector<vector<bool> > &grid, int curr_row, int n){
		if(curr_row == n){
			queencount++;
			display(grid,n);
			cout<<"\n\n";
			return;
		}

		for(int i=0;i<n;i++)
		{
			if(isItSafe(grid,curr_row,i,n)){
				grid[curr_row][i] = true;
				countNQueen(grid,curr_row+1,n);
				grid[curr_row][i] = false;
			}
		}
	}


int main(int argc, char const *argv[])
{
	
	file_i_o();

	clock_t start, end;
    start = clock();

    int n;
    cin>>n;
    vector<vector<bool> > grid(n, vector<bool>(n,false));
   
    countNQueen(grid,0,n); 
     cout<<queencount<<endl;
	end = clock();
	
	double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cerr<<"\nTime : "<<fixed<<time_taken<<setprecision(5)<<" s \n";

	return 0;

}