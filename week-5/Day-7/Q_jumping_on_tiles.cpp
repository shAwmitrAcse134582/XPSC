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
string s;
cin>>s;
ll p=0;
vector<ll>v[27];
for(ll i=0;i<s.size();i++){
     p=s[i]-'a'+1;
    v[p].pb(i+1);
}
 ll l1=s[0]-'a'+1;
 ll l2=s[s.length()-1]-'a'+1;
      ll ans=0;
       if(l1>=l2){
            for(ll i=l1;i>=l2;i--){
                ans+=v[i].size();
            //cout<<v[i].size()<<" ";
            }
       }
       else{
         for(ll i=l1;i<=l2;i++){
            ans+=v[i].size();
         }
       }
       cout<<abs(l1-l2)<<" "<<ans<<endl;
       if(l1>=l2){
            for(ll i=l1;i>=l2;i--){
                for(ll j=0;j<v[i].size();j++){
                    cout<<v[i][j]<<" ";
                }
           }
       }
       else{
            for(ll i=l1;i<=l2;i++){
                for(ll j=0;j<v[i].size();j++){
                    cout<<v[i][j]<<" ";
                }
           }
       }
       cout<<endl;


    
}
get_out;
}