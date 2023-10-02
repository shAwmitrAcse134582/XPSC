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

 ll cnt=0;
 for(ll i=1;i<=n;i++){
    ll x;
    cin>>x;
    cnt=max(cnt,x-i);
 }
 cout<<cnt<<endl;
 
//  for(ll i=1;i<n;i++){
//     // if(i!=a[j]){
//     //     cnt++;
//     // }else{
//     //     j++;
//     // }
//         //  if(a[i+1]>a[i]){
//         //     cnt+=a[i+1]-a[i]-1; 
//         //  }
//         cnt=max(cnt,a[i]-i);
//  }
//  if(cnt==0){
//     cout<<0<<endl;
//  }
//  else
//  cout<<cnt-1<<endl;
    
}
get_out;
}