//Given an array of integers find the largest consecutive sequence. for ex a=[10,4,20,1,3,2] ans= 1,2,3,4.
#include <bits/stdc++.h>
using namespace std;    


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	unordered_set<int> s;
        //int n = a.size();
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            int c=1;
            int ele = a[i]-1;
            if(s.find(ele)==s.end())
            {
                int next_ele = a[i]+1;
                
                while(s.find(next_ele)!=s.end())
                {
                    c++;
                    next_ele++;
                }
                ans = max(ans,c);
            }
        }
        cout<<ans<<endl;
        return 0;
         }
	
