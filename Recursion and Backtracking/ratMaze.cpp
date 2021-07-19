#include <bits/stdc++.h>
#include <math.h>
#include <string>
#include <boost/lexical_cast.hpp>
using namespace std;
#define ll    long long int
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	   ll a;
	   cin>>a;
       ostringstream str1;
       str1 << a;
      string str2 = str1.str();
      string b;
      ll len = str2.length();
      if (str2[0]=='1')
      {
        
        b=str2[0]+"0"+str2.substr(1, len);
        int i_value = boost::lexical_cast<int>(b);
        cout<<i_value<<endl;
      }
      else
      {
         b="1"+str2;
          int i_value = boost::lexical_cast<int>(b);
         cout<<i_value<<endl;
      }
	}
	return 0;
}