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
     cin >> n;
     string s;
     cin >> s;
     map<string,ll> mp;
     for(ll i=0;i+1<n;i++){
      mp[s.substr(i,2)]++;
     }
 
     cout << mp.size() << endl;
      

    
}
get_out;
}