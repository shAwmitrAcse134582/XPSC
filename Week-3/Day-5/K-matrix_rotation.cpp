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
ll a[4];
for(ll i=0;i<4;i++){
    cin>>a[i];
}
ll mx=*max_element(a,a+4);
ll mn=*min_element(a,a+4);
if(mx==a[0]&& mn==a[3] ||mx==a[3]&& mn==a[0] || mx==a[1]&& mn==a[2] || mx==a[2]&& mn==a[1])
yes;
else
no;


    
}
get_out;
}