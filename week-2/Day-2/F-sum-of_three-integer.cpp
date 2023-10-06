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
ll k,s;
cin>>k>>s;
map<ll,ll>mp,mp1;
for(ll i=0;i<=k;i++){
    for(ll j=0;j<=k;j++){
        mp[i+j]++;
    }
}
ll cnt=0;
// for(auto val:mp){
//     cout<<val.first<<" "<<val.second<<endl;
// }
for(ll i=0;i<=k;i++){
    for(auto val:mp){
        if(s-i==val.first){
            cnt+=val.second;
        }
    }
}
// for(auto val:mp){
//     for(auto val1:mp1){
//         if(val.first==val1.first){
//                cnt++;
//         }
//     }
// }
cout<<cnt<<endl;
get_out;
}