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
ll n,m;
while(cin>>n>>m){
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll l=0,r=INT_MAX ;
    ll ans;
    while(l<=r){
        ll capacity=l+(r-l)/2;
        ll container=1;
        ll sum=0;
        for(ll i=0;i<n;i++){
            if(a[i]>capacity){
                container=INT_MAX;
                break;
            }
            sum+=a[i];
            if(sum>capacity){
                container++;
                sum=a[i];
            }
        }
        if(container<=m){
            ans=capacity;
            r=capacity-1;
        }
        else{
            l=capacity+1;
        }
    }
    cout<<ans<<endl;
}

get_out;
}