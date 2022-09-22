#include <bits/stdc++.h>
using namespace std;
long long t,n,d,i,dem,tmp,a[1000];
string s;
int main()
{
	cin>>t;
	while (t--)
	{
		cin>>d;
		fflush(stdin);
		cin>>s;
		sort(s.begin(),s.end());
		dem=1;tmp=0;
		for (int i=0 ; i<s.size() ; i++)
			if (s[i]!=s[i+1]) 
			{
				tmp++;
				a[tmp]=dem;
				dem=1;
			}
			else dem++;
		sort (a+1, a+tmp+1);
		if (a[tmp]*d<=s.size()+1) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}