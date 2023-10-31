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
cin>>n;
ll a[n];
ll x=0;
for(ll i=0;i<n;i++){
    cin>>a[i];
}
 unordered_map<int, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int x = a[i];
        while (x > 0) {
            mp[x]++;
            x >>= 1;
        }
        count += mp[a[i] ^ a[i]];
    }
 cout<<count<<endl;

    
}
get_out;
}