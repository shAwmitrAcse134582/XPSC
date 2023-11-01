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
ll n,q;
cin>>n>>q;
vector<ll>v;
map<ll,ll>mp1,mp2;
for(ll i=0;i<n;i++){
    ll a;
    cin>>a;
    v.pb(a);
}
for(ll i=0;i<n;i++){
    mp1.insert({v[i],i});
}
for(ll i=n-1;i>=0;i--){
    mp2.insert({v[i],i});
}
bool ok1=false;
bool ok2=false;
ll fst,lst;
ll mn1=INT_MAX;
ll mn2=INT_MAX;
while(q--){
    ll u,w;
    cin>>u>>w;
//     for(ll i=0;i<n;i++){
//         if(u==v[i]){
//             ok1=true;
//             fst=i;
//             mn1=min(mn1,fst);   
//         }
//         if(w==v[i]){
//             ok2=true;
//             lst=i;
//            //mn2=min(mn2,lst);
             
//         }
//     }
//    // cout<<mn1<<" "<<lst<<endl;
// //if(fst==-1 || lst==-1)no;
// if(!ok1 || !ok2) no;
// else if(mn1>lst) no;
//     else yes;
// //fst=-1,lst=-1;
// ok2=false;
// ok1=false;
// mn1=INT_MAX;
// }
// v.clear();
if(mp1.count(u) && mp2.count(w)){
    if(mp1[u]<=mp1[w]){
        yes;
    }
    else if(mp2[u]<=mp2[w]){
        yes;
    }
    else if(mp1[u]<=mp2[w]){
        yes;
    }
    else if(mp2[u]<=mp1[w]){
        yes;
    }
    else{
        no;
    }
}
else{
    no;
}
    
}
}
//
get_out;
}