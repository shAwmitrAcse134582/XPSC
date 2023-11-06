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
if(n==1){
    cout<<0<<endl;
}
else{
    ll cnt=0;
    bool ok=true;
    
    for(ll i=n-2;i>=0;i--){
          while(a[i]>=a[i+1]){
            if(a[i]==0 && a[i+1]==0){
           ok=false;
           break;
            }
                a[i]/=2;
                cnt++;
          }
        
        }
       if(!ok)cout<<-1<<endl;
       else cout<<cnt<<endl;
       
    }
    

    
}
get_out;
}