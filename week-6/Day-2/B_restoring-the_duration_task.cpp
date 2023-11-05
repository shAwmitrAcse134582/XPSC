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
ll dif=b[0]-a[0];
stack<ll>q;
vector<ll>v;
v.pb(dif);
q.push(b[0]);
ll mx=0;
//cout<<q.front()<<endl;
for(ll i=1;i<n;i++){
   mx=max(q.top(),a[i]);
 // cout<<mx<<endl;
  //cout<<q.top()<<endl;
  dif=b[i]-mx;
  q.push(b[i]);
  v.pb(dif);
 
}
for(auto val:v){
    cout<<val<<" ";
}
cout<<endl;
    
}
get_out;
}