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
ll n,x;
cin>>n>>x;
vector<ll>v(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
auto it=lower_bound(v.begin(),v.end(),x);
ll idx=it-v.begin();
cout<<idx<<endl;    
get_out;
}