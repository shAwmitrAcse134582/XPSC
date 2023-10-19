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
    ll n,s,r;
       cin >> n >> s >> r;
       ll avg = r/(n-1);
       ll temp =r-avg*(n-1);
       vector<ll> v;
       for(ll i=1;i<=n-1;i++){
        // cout << avg << ' ';
        v.pb(avg);
       }
 
       if(temp!=0){
        for(ll i=0;i<n;i++){
            if(v[i]<6){
                // ll te = 6-v[i];
                // v[i]=v[i]+te;
                // temp=temp-te;
                v[i]++;
                temp--;
            }
 
            if(temp<=0)break;
        }
       }
       for(ll i=0;i<n-1;i++){
        cout << v[i] <<  ' ';
       }
 
 
       cout << s-r << endl;

    
}
get_out;
}