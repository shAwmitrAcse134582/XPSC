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
ll n,m;
cin>>n>>m;
ll a[n];
ll sum=0;
vector<ll>v;
for(ll i=0;i<n;i++){
    cin>>a[i];
    v.pb(a[i]);
    sum+=a[i];
}
sort(a,a+n);
ll tsum=m+sum;
ll i=1,j=0;

// cout<<tsum<<endl;
while(sum<tsum){
    if(a[j]!=i){
        v.pb(i);
        // cout<<i<<endl;
        sum+=i;
        i++;
    }
    else{
        i++;
        j++;
    }

}
sort(v.begin(),v.end());
bool ok=false;
ll mx=*max_element(v.begin(),v.end());
for(ll i=0;i<mx;i++){
     if(v[i]!=i+1){
        ok=true;
        break;
     }
}
if(ok){
    no;
}
else if(sum==tsum){
    yes;
}
else{
    no;
}
    
}
get_out;
}