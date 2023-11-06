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
ll a[n],b[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
for(ll i=0;i<n;i++){
    cin>>b[i];
}
vector<ll>v;

ll mx1=*max_element(a,a+n);
ll mx2=*max_element(b,b+n);
ll mn1=*min_element(a,a+n);
ll x=0;
bool ok=true;
for(ll i=0;i<n;i++){
     if(a[i]<b[i]){
        ok=false;
     }
     else{
        ll dif=a[i]-b[i];
        if(dif>x){
          x=dif;
        }
     }
}
for(ll i=0;i<n;i++){
    ll dif=a[i]-b[i];
    if(x==dif)continue;
    else if(dif<x && b[i]!=0){
        ok=false;
        break;
    }

}
if(ok)yes;
else no;
    
}
get_out;
}