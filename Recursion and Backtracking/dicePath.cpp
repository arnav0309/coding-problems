// you are given an start point and end point .you can travel in 6 ways from one
// point to other point. you have to print all the ways so that you reach to end point.


#include <bits/stdc++.h>
using namespace std;

int totalpath=0;
void dicepath(int n, int i, string osf)
{
	if(i>=n) return;
	if(i==n-1)
	{
		totalpath+=1;
       cout<<osf<<endl;
       return;
	}

	for(int j=1;j<=6;j++)
	{
		dicepath(n,j+i,osf+to_string(j)+"->");
	}
}


int main(int argc, char const *argv[])
{
	dicepath(7,0,"");
	cout<<totalpath<<endl;
	return 0;
}