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
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll k;
cin>>k;
ll mx=INT_MIN;
for(ll i=0;i<n-k+1;i++){
    ll s=0;
    for(ll j=i;j<i+k;j++){
        s+=a[j];
    }
    mx=max(mx,s);
}
cout<<mx<<endl;
get_out;
}