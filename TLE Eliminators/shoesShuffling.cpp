#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
 
void  solve(){
	
int n;
cin>>n;
vector<int> vec(n);
for(auto &it:vec)
{
	  cin>>it;
	  
}
map<int,int> mp;
for(auto it:vec)
{
   	mp[it]++;
}
 
for(auto it:mp)
{
 if (it.second==1)
 {
 	cout<<-1<<endl;
 	return;
 }
}

vector<int> p(n);
for(int i=0;i<n;i++)
{
	int a=i+1;    // for oneIndexed
	while(i+1<n && vec[i]==vec[i+1])
	{
		p[i]=i+2;
		i++;
	}
	p[i]=a;
	
}
for(auto it:p)
{
	cout<<it<<" ";
}
cout<<endl;
 
 
 
}
int32_t main(){
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		solve();
	}
 
return 0;
	
}