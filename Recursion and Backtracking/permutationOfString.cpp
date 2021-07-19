//given a string with all unique character 
//print all possible permutation of string.
// for ex:- ABC ans:- ABC ACB CAB CBA BCA BCA

#include <bits/stdc++.h>
using namespace std;

// void permut(string str,string permu)
// {
// 	if(str.size()==0)
// 	{
// 		cout<<permu<<endl;
// 		return;
// 	}
// 	unordered_set<char> s;
// 	for(int i=0;i<str.size();i++)
// 	{
// 		char ch = str[i];
// 		if(s.count(ch)==0){
// 		string ros = str.substr(0,i)+str.substr(i+1);
// 		s.insert(ch);
// 		permut(ros,permu+ch);
// 	}
// 	}
// }

void permut(string str, int j)
{
	
	if (str.size()-1==j)
	{
		/* code */
		
		 cout<<str<<endl;
		return;
	}

	for(int i=j;i<str.size();i++)
	{
		swap(str[i],str[j]);
		permut(str,j+1);
		swap(str[i],str[j]);
	}
}
int main(int argc, char const *argv[])
{
	permut("AAC",0);
	
	return 0;
}