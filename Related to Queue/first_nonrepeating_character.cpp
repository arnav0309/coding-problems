/*
  you are getting one by one character input from user.
 As soon as you receive a char from user, tell the first non repeating character of the stream till now.
*/
#include <bits/stdc++.h>
using namespace std;
    


int main(int argc, char const *argv[])
{
	// file_i_o();
	int n;
	cin>>n;
	map<char,int>m;
	queue <char> c;
	
	for(int i=1;i<=n;i++){
		char x;
		cin>>x;
		m[x]++;
		c.push(x);
		while(!c.empty()){
		if(m.at(c.front())>1){
			c.pop();
			
		}else{
			
			cout<<c.front()<<endl;
			break;
		}
	}

	if(c.empty()){
		cout<<"-1"<<endl;
	}

	}

	return 0;
}