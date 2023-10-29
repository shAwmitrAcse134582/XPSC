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
ll n,x;
cin>>n>>x;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll ans=-1;
ll l=0,r=n-1;
while(l<=r){
    ll mid=(l+r)/2;
    if(x==a[mid]){
       ans=mid;
    //    r=mid-1;
    l=mid+1;

        
    }
    else if(x<a[mid]){
        r=mid-1;
    }
    else{
        l=mid+1;
    }
    
}
cout<<ans<<endl;
get_out;
}