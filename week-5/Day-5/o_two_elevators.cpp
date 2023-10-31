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
ll a,b,c;
  cin>>a>>b>>c;
  ll x;
  if(b<c)
  x=abs(b-c)+(c-1);
  else
  x=b-1;
  //cout<<x<<endl;
  ll y=a-1;
  if(y<x)
  cout<<1<<endl;
  else if(x<y)
  cout<<2<<endl;
  else
  cout<<3<<endl;
    
}
get_out;
}