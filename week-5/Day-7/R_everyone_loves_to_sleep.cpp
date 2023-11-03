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
    ll time=1440;
ll n,h,m;
cin>>n>>h>>m;
ll p=h*60+m;
ll ans=INT_MAX;
while(n--){
    ll a,b;
    cin>>a>>b;
    ll x,dif=0;
    x=a*60+b;
    if(h==a && m==b){
      ans=0;
    }
else if(h<a){
     dif=abs(x-p);
      ans=min(dif,ans);
    }
    else if(h>a){
          ll q=x+1440;
          dif=abs(q-p);
          ans=min(dif,ans);
    }
    else if(h==a){
        if(m<b){
            dif=x-p;
            ans=min(dif,ans);
        }
        else{
            ll q=x+1440;
          dif=abs(q-p);
          ans=min(dif,ans); 
        }
    }
}
ll valh=ans/60;

ll valm=ans-valh*60;
cout<<valh<<" "<<valm<<endl;

    
}
get_out;
}