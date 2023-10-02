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
ll sum=0;
vector<ll>v1,v2;
for(ll i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    if(a[i]%2==0){
        v1.push_back(a[i]);
    }
    else{
        v2.push_back(a[i]);
    }
}
sort(v2.begin(),v2.end());
ll mn=*min_element(a,a+n);
if(sum%2==0){
    cout<<sum<<endl;
}
else{
    cout<<sum-v2[0]<<endl;
}

    

get_out;
}