//Given an array,count distinct elements in every window of size k.
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;




int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	unordered_map<int,int> m;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		m[a[i]]++;
	}
	
	

	return 0;
}