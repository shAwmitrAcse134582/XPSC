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
ll c1=0,c2=0,mx1=0,mx2=0;
vector<ll>v1,v2;
for(ll i=0;i<n;i++){
    if(a[i]==0){
        c1=0;
    }
    else{
        c1++; 
        mx1=max(c1,mx1);
       
    }
}
for(ll i=0;i<n;i++){
    if(b[i]==0){
        c2=0;
    }
    else{
        c2++; 
        mx2=max(c2,mx2);
       
    }
}
if(mx1<mx2){
    cout<<"Addy"<<endl;
}
else if(mx1>mx2){
    cout<<"Om"<<endl;
}
else cout<<"Draw"<<endl;
    
}
get_out;
}