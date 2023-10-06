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
ll k,s;
cin>>k>>s;
ll cnt=0;
for(ll i=0;i<=k;i++){
    for(ll j=0;j<=k;j++){
        for(ll l=0;l<=k;l++){
            if(i+j+l==s){
              cnt++;
            }
        }
    }
}
cout<<cnt<<endl;

get_out;
}