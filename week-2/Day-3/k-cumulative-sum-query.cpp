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
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll q;
cin>>q;
while(q--){
    ll x,y;
    cin>>x>>y;
    ll ans=0;
    ans=a[x];
   // cout<<ans<<endl;
    for(ll i=x+1;i<=y;i++){
        ans+=a[i];
    }
    cout<<ans<<endl;
    ans=0;
}
get_out;
}