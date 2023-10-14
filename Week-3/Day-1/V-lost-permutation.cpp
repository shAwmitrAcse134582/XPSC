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
if(n==2){
    cout<<"2 1"<<endl;
}
else if(n==3){
    cout<<-1<<endl;

}
else{
    cout<<n<<" "<<n-1<<" ";
    for(ll i=1;i<=n-2;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
    
}
get_out;
}