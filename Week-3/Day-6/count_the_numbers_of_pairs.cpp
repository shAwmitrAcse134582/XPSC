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
cin>>n>>k;
string s;
cin>>s;
ll sum=0;
ll total=0;
ll a[1000];
			for(ll i=60;i<=125;i++){
                a[i]=0;
            } 
			for(ll i=0;i<n;i++){
               a[s[i]]++;
            } 
			for(ll i=65;i<=90;i++){
				ll x=min(a[i],a[i+32]);
				ll y=max(a[i],a[i+32]);
				ll m=(y-x)/2;
				total+=x;
				sum+=m;
			}
			total+=min(sum,k);
			cout<<total<<endl; 
}
get_out;
}