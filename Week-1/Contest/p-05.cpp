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
  ll e=0,o=0;
  vector<ll>v1,v2;
  for(ll i=0;i<n;i++){
    cin>>a[i];
    if(i%2==0){
        v1.push_back(a[i]);
    }
    else{
        v2.push_back(a[i]);
    }
}
bool ok=false;
ll x=v1[0];
if(x%2==0){
    for(ll i=0;i<n;i++){
        if(v1[i]%2!=0){
            ok=true;
            break;
        }
    }
}
else{
    for(ll i=0;i<n;i++){
        if(v1[i]%2==0){
            ok =true;
            break;
        }
    }
}

ll y=v2[0];
if(y%2==0 && ok==false){
    for(ll i=0;i<n;i++){
        if(v2[i]%2!=0){
            ok=true;
            break;
        }
    }
}
else if(y%2!=0 && ok==false){
    for(ll i=0;i<n;i++){
        if(v2[i]%2==0){
            ok =true;
            break;
        }
    }
}
if(ok){
    no;
}
else{
    yes;
}

}
get_out;

}