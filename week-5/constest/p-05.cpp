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
const ll mod=1e9+7;
int main()
{
fast;
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll a[n];
ll e=0,o=0;
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2==0){
        e++;
    }
    else{
        o++;
    }
}
ll x=1;
for(ll i=1;i<=e;i++){
    x=(x*2)%mod;
}
cout<<x-1+(o!=0)<<endl;
    
}
get_out;
}