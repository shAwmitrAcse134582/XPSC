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
ll n,k;
cin>>n>>k;
ll cnt=0;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x%k==0){
       cnt++;
    }
}
cout<<cnt<<endl;
get_out;
}