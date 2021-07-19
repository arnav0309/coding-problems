//  https://codeforces.com/contest/1544/problem/A


#include <bits/stdc++.h>
using namespace std;
#define ll   long long int
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

	w(t){

	/* Write Code Here */

     ll n;
     cin>>n;
     ll mx = 0;
     
     while(n>0){
     	ll x = n%10;
       mx= max(mx,x);
       n/=10;
     }
	cout<<mx<<endl;

	}

	end = clock();
	
	double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cerr<<"\nTime : "<<fixed<<time_taken<<setprecision(5)<<" s \n";

	return 0;

}