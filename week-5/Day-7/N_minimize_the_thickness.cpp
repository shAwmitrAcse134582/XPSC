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
ll a[n];
ll sum=0;
ll ans=1e14;
for(ll i=0;i<n;i++){
    cin>>a[i];

}
for(ll i=0;i<n;i++){
    sum+=a[i];
    ll s=0,c=0,mx=i+1;
    bool ok=true;
    for(ll j=i+1;j<n;j++){
        s+=a[j];
        c++;
        if(s==sum){
            mx=max(mx,c);
            s=0,c=0;
        }
        else if(s>sum){
            ok=false;
            break;
        }
    }
    if(!s){
        ans=min(ans,mx);
    }
}
cout<<ans<<endl;
    
}
get_out;
}