   
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



#include<bits/stdc++.h>

class Solution {
public:
    
    bool isSafe(std::vector<std::vector<char> > &b, int i, int j, int num) {
        for(int row = 0; row < 9; row++) {
            if(b[row][j]-'0' == num) return false;
        }
        for(int col = 0; col < 9; col++) {
            if(b[i][col]-'0' == num) return false;
        }
        int r = (i/3)*3;
        int c = (j/3)*3;
        for(int row = r; row < (r)+3; row++) {
            for(int col = c; col < c+3; col++) {
                if(b[row][col] - '0' == num) return false;
            }
        }
        return true;
    }
    
    bool sudoku(std::vector<std::vector<char> > &b, int row, int col) {
        if(col == 9) {
            return sudoku(b, row+1, 0);
        }
        if(row == 9) {
            return true;
        } 
        if(b[row][col] == '.') {
            for(int num = 1; num <= 9; num++) {
                if(isSafe(b, row, col, num)) {
                    b[row][col] = '0'+num;
                    bool res = sudoku(b, row, col+1);
                    if(res) return true;
                    b[row][col] = '.';
                }
            }
            return false;
        }
        else return sudoku(b, row, col+1);
    }
    void solveSudoku(std::vector<std::vector<char>>& board) {
        bool res = sudoku(board, 0, 0);
    }
};


int main(int argc, char const *argv[])
{

	
	file_i_o();

	clock_t start, end;
    start = clock();

	w(t){

	/* Write Code Here */
		
	}

	end = clock();
	
	double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cerr<<"\nTime : "<<fixed<<time_taken<<setprecision(5)<<" s \n";

	return 0;

}