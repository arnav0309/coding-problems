//  https://atcoder.jp/contests/abc209/tasks/abc209_c

#include <bits/stdc++.h>
using namespace std;
#define ll                 long long int
    


int main(int argc, char const *argv[])
{
	

	int n;
	cin>>n;
	vector<ll>vec;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end());
	ll sum = 1;
    for(int j=1;j<=n;j++)
    {
    	sum*=vec[j]-j+1;
    	
    	sum=sum%(1000000000+7);
    }
    cout<<sum<<endl;
	return 0;

}