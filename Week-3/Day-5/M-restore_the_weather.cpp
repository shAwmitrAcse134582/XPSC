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
     cin >> n >> k;
     ll arr[n],arr2[n],b[n];
     for(ll i=0;i<n;i++){
      cin >> arr[i];
      arr2[i] = arr[i];
     }
      for(ll i=0;i<n;i++){
      cin >> b[i];
      
     }
 
 
     sort(arr,arr+n);
     sort(b,b+n);
     map< ll,vector<ll> > mp;
     for(ll i=0;i<n;i++){
      mp[arr[i]].pb(b[i]);
     }
     for(ll i=0;i<n;i++){
 
      cout << mp[arr2[i]][0] << ' ';
      mp[arr2[i]].erase(mp[arr2[i]].begin()) ;
     }
     cout << endl; 
}
get_out;
}