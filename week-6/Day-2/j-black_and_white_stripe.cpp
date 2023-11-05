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
ll n,k;
cin>>n>>k;
string s;
cin>>s;
ll cnt=0;
ll mn=INT_MAX;
// for(ll i=0;i<=n-k;i++){
//     for(ll j=0;j<k;j++){
//        if(s[i+j]=='B'){
//          cnt++;
//        }
//     }
//         ll val=k-cnt;
//        mn=min(mn,val);
//    // cout<<cnt<<endl;
//        cnt=0;

// }
  ll pre[n+1];
  pre[0]=0;
  for(ll i=0;i<n;i++){
    if(s[i]=='B')cnt++;
    pre[i+1]=cnt;
  }
  for(ll i=1;i<=n;i++){
    ll x=i+k-1;
    if(x>n)break;
    ll dif=pre[x]-pre[i-1];
    ll rem=k-dif;
    mn=min(mn,rem);
  }

 cout<<mn<<endl;
    
}
get_out;
}