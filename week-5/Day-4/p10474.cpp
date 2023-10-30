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
ll n,x;

vector<ll>v;
ll cnt=0;
while(cin>>n>>x,n!=0 && x!=0)
{
    cnt++;
   for(ll i=0;i<n;i++){
    ll a;
    cin>>a;
    v.pb(a);
}
sort(v.begin(),v.end());
cout<<"CASE# "<<cnt<<":"<<endl;
ll i=0;
for(i=0;i<x;i++){
    ll m;
    cin>>m;
  
//     ll l=0,r=n-1;
//     ll ans=-1;
//     while(l<=r){
//         ll mid=(l+r)/2;
// //cout<<mid<<endl;
//     // cout<<m<<" "<<v[mid]<<endl;
//         if(m==v[mid]){
//             ans=mid;
//          //cout<<m<<" "<<"found at "<<mid+1<<endl;
//            break;
//         }
//         else if(m<v[mid]){
//             r=mid-1;
//         }
//         else{
//             l=mid+1;
           
//         }
//     }
    // if(ans==-1){
    //     cout<<m<<" not found"<<endl;
    // }
    // else{
    //   cout<<m<<" "<<"found at "<<ans+1<<endl; 

    // }
    auto it=lower_bound(v.begin(),v.end(),m);
    if(*it!=m){
         cout<<m<<" not found"<<endl;
    }
    else{
        cout<<m<<" "<<"found at "<<(it-v.begin())+1<<endl; 
    }

   
}
v.clear();
}


}