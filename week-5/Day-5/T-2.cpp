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
ll n;
cin>>n;
vector<ll>v;
for(ll i=0;i<n;i++){
    ll a;
    cin>>a;
  v.pb(a);
}

//sort(v.begin(),v.end());
ll mx=*max_element(v.begin(),v.end());
ll mn=*min_element(v.begin(),v.end());
ll q;
cin>>q;
while(q--){
    ll m;
    cin>>m;
    auto it=lower_bound(v.begin(),v.end(),m);
    //auto itr=upper_bound(v.begin(),v.end(),m);
    if(*it!=m){
      if(m<mn){
        cout<<"X "<<mn<<endl;
      }
      else if(mx<m){
        cout<<mx<<" X"<<endl;
      }
      else{
        cout<<v[it-v.begin()-1]<<" "<<v[it-v.begin()]<<endl;
      }
    }
    else{
        cout<<v[it-v.begin()-1]<<" "<<v[it-v.begin()+1]<<endl;
    }

}
get_out;
}