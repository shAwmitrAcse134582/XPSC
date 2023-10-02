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
ll n;
cin>>n;
vector<ll>v;
for(ll i=1;i<=n-1;i++){
    ll x;
    cin>>x;
    v.push_back(x);
}

sort(v.begin(),v.end());
// for(auto val:v){
//     cout<<val<<endl;
// }
// cout<<v[1]<<endl;
for(ll i=0;i<n;i++){
    if(i+1!=v[i]){
     cout<<i+1<<endl;
     return 0;
    }
}
get_out;
}