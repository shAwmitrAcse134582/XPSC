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
bool isvalid(ll dif,vector<ll>v,ll n,ll c){
    ll cnt=1;
    ll last=0;
    for(ll i=1;i<n;i++){
        if(abs(v[i]-v[last]>=dif)){
          cnt++;
          last=i;
        }
    }
    return cnt>=c;
}
int main()
{
fast;
ll t;
cin>>t;
while(t--){
ll n,c;
cin>>n>>c;
vector<ll>v;
for(ll i=0;i<n;i++){
     ll a;
     cin>>a;
     v.pb(a);
}
sort(v.begin(),v.end());
ll l=0;
ll r=INT_MAX;
ll ans;
while(l<=r){
    ll mid=l+(r-l)/2;
    if(isvalid(mid,v,n,c)){
         ans=mid;
         l=mid+1;
    }
    else{
        r=mid-1;
    }
}
 cout<<ans<<endl;   
}
get_out;
}