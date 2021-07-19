// You will be given a value n, print the first n+1 whole number in 
// lexeographical order.

#include <bits/stdc++.h>

using namespace std;

void lexico(int n, int i)
{
	if(i>n) return;
	cout<<i<<endl;
	for(int j=(i==0)?1:0;j<=9;j++)
		lexico(n,10*i+j);
}

int main(int argc, char const *argv[])
{
	lexico(9,0);
	return 0;
}