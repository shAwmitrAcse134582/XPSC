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
ll l,r,x;
cin>>l>>r>>x;
ll a,b;
cin>>a>>b;
ll ans=-1;
if(a==b){
    ans=0;
}
else if(abs(a-b)>=x){
    ans=1;
}
else if(abs(l-a)>=x && abs(l-b)>=x || abs(r-a)>=x && abs(r-b)>=x){
    ans=2;
}
else if(abs(l-a)>=x && abs(r-b)>=x && abs(r-l)>=x || abs(l-b)>=x && abs(r-a)>=x && abs(r-l)>=x){
    ans=3;
}
cout<<ans<<endl;

    
}
get_out;
}