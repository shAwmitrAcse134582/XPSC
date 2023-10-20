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
ll n,k; 
cin >> n >> k; 
          ll dif = 0; 
          ll x = 1,p=0;
          vector<ll>v; 
          while(n)
          {
          	     if(x>k)break; 
          	     x+=dif; dif+=1; 
          	     if(x<=k and (k-x)>=n-1)
                 v.pb(x),n--; 
          } 
          if(v.size()>1)
          p=v[v.size()-1];
          for(int i = p+1; i<=k and  n ;i++)v.pb(i),n--;
          for(auto u:v)cout << u<<' '; 
          cout << endl; 

    
}
get_out;
}