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
ll x,y;
cin>>x>>y;
// ll p=min(x,y);
// ll q=max(x,y);
if(y%x==0){
    
    cout<<1<<" "<<y/x<<endl;

}
else{
    cout<<"0 0"<<endl;
}
    
}
get_out;
}