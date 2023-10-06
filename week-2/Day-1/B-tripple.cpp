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
bool ok=true;
for(auto val:mp){
   if(val.second>=3){
    cout<<val.first<<endl;
    ok=false;
    break;
   }
}
if(ok)
cout<<-1<<endl;
    
}
get_out;
}