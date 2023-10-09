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
map<ll,ll>mp;
while(t--){
ll x;
cin>>x;
mp[x]++;   
}
for(auto val:mp){
    if(val.second==1){
        cout<<val.first<<endl;
        return 0;
    }
}
get_out;
}