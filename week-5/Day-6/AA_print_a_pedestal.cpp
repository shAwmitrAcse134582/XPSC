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
// if(n%2==0){
//     cout<<n/2-1<<" "<<n/2<<" "<<n-(n/2)-(n/2-1)<<endl;
// }
// else{
//     cout<<(n+1)/2-2<<" "<<(n+1)/2<<" "<<n-((n+1)/2)-((n+1)/2-2)<<endl;
// }
if(n==7){
    cout<<2<<" "<<4<<" "<<1<<endl;
}
else if(n%3==0){
    cout<<n/3<<" "<<n/3+1<<" "<<n-n/3-(n/3 +1)<<endl;
}
else{
    cout<<n/3+1<<" "<<n/3+2<<" "<<n-(n/3 +1)-(n/3 +2)<<endl;
}


    
}
get_out;
}