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
ll n;cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll l=0,r=INT_MAX;
bool ok=false;
while(l<=r){
    ll mid=l+(r-l)/2;
    double ans=1.0;
    for(ll i=0;i<n;i++){
        ans*=(a[i]*1.0/mid);
    }
    if(fabs(ans-1.0)<1e-15){
        ok=true;
        break;
    }
    else if(ans>1.0){
        l=mid+1;
    }
    else{
        r=mid-1;
    }
}
if(ok)yes;
else no;
    
}
get_out;
}