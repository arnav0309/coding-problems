//https://codeforces.com/problemset/problem/1527/C
#include <bits/stdc++.h>

using namespace std;
    


int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		map<int,vector<long long> >m;
		for (int i = 0; i < n; i++)
		{
			long long y;
			cin>>y;
			m[y].push_back(i);
		}
     long long t=0;
     
	for (auto r:m)
	{
		long long psum=0;
		for(int x: r.second){

			t += psum * (n-x);
			psum += (x + 1);
		}
		/* code */
		
	}
     
     cout<<t<<endl;
	}

	return 0;
}