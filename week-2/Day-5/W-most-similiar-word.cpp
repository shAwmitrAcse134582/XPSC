#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
ll t;
cin>>t;
while(t--){
ll n,m,i,j,k;
   		cin>>n>>m;
   		string s[n];
   		for(i=0;i<n;i++)
   			cin>>s[i];
   		int ans=INT_MAX;
   		for(i=0;i<n;i++)
   		{
   			for(j=i+1;j<n;j++)
   			{
   				int sum=0;
   				for(int k=0;k<m;k++)
   				{
   					sum+=abs(s[i][k]-s[j][k]);
   				}
   				ans=min(ans,sum);
   			}
   		}
   		cout<<ans<<endl;
 
    
}
get_out;
}