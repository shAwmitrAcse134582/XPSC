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
ll sum=0;
ll mx=INT_MIN;
ll i=0,j=0;
while(j<n){
    sum+=a[j];
//cout<<sum<<endl;
if(j>=k-1){
     mx=max(mx,sum);
    sum-=a[i];
    i++;
}
    j++;
}
cout<<mx<<endl;
get_out;
}