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
ll n,m,h;
cin>>n>>m>>h;
vector<ll>a(n),b(m);
for(ll i=0;i<n;i++){
    cin>>a[i];
}

for(ll i=0;i<m;i++){
    cin>>b[i];
}
sort(a.begin(),a.end(),greater<ll>());
sort(b.begin(),b.end(),greater<ll>());
ll sum=0;
for(ll i=0;i<min(n,m);i++){
   sum+=min(b[i]*h,a[i]);
}
cout<<sum<<endl;
    
}
get_out;
}