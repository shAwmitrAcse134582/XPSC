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
ll n;
cin>>n;
ll x=n*3;
map<string,ll>mp;
vector<string>v(x);
string s;
for(ll i=0;i<x;i++){
    
  cin>>v[i];
    // cout<<s<<endl;
    mp[v[i]]++;
}
// ll s1=0,s2=0,s3=0;
// for(auto val:mp){
//     cout<<val.first<<" "<<val.second<<endl;
   
// }
ll ans=0;
for(ll i=1;i<=x;i++){
    if(mp[v[i-1]]==1){
        ans+=3;
    }
    else if(mp[v[i-1]]==2){
        ans+=1;
    }
    if(i%n==0){
        cout<<ans<<" ";
         ans=0;
        
    }
   
}
cout<<endl;  
}
get_out;
}
