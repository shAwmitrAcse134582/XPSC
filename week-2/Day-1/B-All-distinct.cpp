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
map<ll,ll>mp;
for(ll i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
}
vector<ll>v;
ll cnt=0;
for(auto val:mp){
    v.pb(val.second);
}
for(auto val:v){
    if(val%2==0){
        cnt++;
    }
}
if(cnt%2==0){
    cout<<v.size()<<endl;
}
else{
    cout<<v.size()-1<<endl;
}
    
}
get_out;
}