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
ll sum=0;
for(ll i=1;i<=n;i++){
    for(ll j=1;j<=n;j++){
        for(ll k=1;k<=n;k++){
            sum+=__gcd(__gcd(i,j),k);
        }
    }
}
cout<<sum<<endl;
get_out;
}