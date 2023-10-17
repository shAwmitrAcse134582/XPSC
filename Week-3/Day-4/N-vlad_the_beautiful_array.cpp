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
for(ll i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
bool ok=false;
ll x=a[0]%2;
if(x==0){

   for(ll i=0;i<n;i++){
    if(a[i]%2==1){
        ok=true;
        break;
    }
}
}
if(a[0]%2==1 || !ok){
    yes;
}
else if(ok) no;

    
}
get_out;
}