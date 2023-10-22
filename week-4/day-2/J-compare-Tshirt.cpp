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
string s1,s2;
	  cin>>s1>>s2;
	  ll x=s1.size();
	  ll y=s2.size();
	  
	  if(s1==s2)
	  cout<<"="<<endl;
	  else
	  {
	  	if(s1[x-1]==s2[y-1])
	  	{
	  		if(s1[x-1]=='L')
	  		{
	  			if(x>y)
	  			cout<<">"<<endl;
	  			else
	  			cout<<"<"<<endl;
	  		}
	  		else if(s1[x-1]=='S')
	  		{
	  			if(x>y)
	  			cout<<"<"<<endl;
	  			else
	  			cout<<">"<<endl;
	  		}
	  		else
	  	       cout<<"="<<endl;
	  	}
	  	else
	  	{
	  		if(s1[x-1]=='S')
	  		cout<<"<"<<endl;
	  		else if(s1[x-1]=='M')
	  		{
	  			if(s2[y-1]=='S')
	  			cout<<">"<<endl;
	  			
	  			else
	  			cout<<"<"<<endl;
	  		}
	  		else
	  		cout<<">"<<endl;
	  		
	  		
	  	}
	  	
	  }
 
    
}
get_out;
}