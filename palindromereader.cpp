#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
signed main()
{
	
	string s;
	cin>>s;
	int cnt[26]={}; 
	int n=(int)s.length();
	for(auto ch : s)
	{
		cnt[ch-'A']++;
	}

	string ans="";
	
	bool x=false; 
	char ch='.';
	for(int i=0; i<26; i++)
	{
		if(cnt[i]%2)
		{
			if(!x)
			{
				x=true;
				ch=(char)('A'+i); 
				for(int j=0; j<cnt[i]/2; ++j)
				ans+=(char)('A'+i);
			}
			else
			{
				
				cout<<"NO SOLUTION";
				return 0;
			}
			
		}
		else
		{
			for(int j=0; j<cnt[i]/2; ++j)
				ans+=(char)('A'+i);
		}
	}
	cout<<ans; 
	if(x)
		cout<<ch; 
	reverse(ans.begin(), ans.end()); 
	cout<<ans; 
 
	return 0;	
}