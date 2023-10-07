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
ll n;
cin>>n;
ll a[n];
vector<ll>v;
for(ll i=0;i<n;i++){
    cin>>a[i];
    for(ll j=1;j<=a[i];j++){
        if(a[i]%j==0){
            v.pb(j);
        }
    }
}
map<ll,ll>mp;
for(auto val:v){
    mp[val]++;
}
ll mx=INT_MIN;
ll ans;
for(auto val:mp){
   if(val.first!=1 && val.second>mx){
    ans=val.first;
    mx=val.second;
   }
   // cout<<val.first<<" "<<val.second<<endl;
}
cout<<ans<<endl;

get_out;
}