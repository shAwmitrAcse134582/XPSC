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
if(n<=9){
    cout<<n<<endl;
}
else if(n<=17){
    cout<<n-9<<9<<endl;
}
else if(n<=24){
    cout<<n-17<<89<<endl;
}
else if(n<=30){
cout<<n-24<<789<<endl;
}
else if(n<=35){
    cout<<n-30<<6789<<endl;
}
else if(n<=39){
    cout<<n-35<<56789<<endl;
}
else if(n<=42){
    cout<<n-39<<456789<<endl;
}
else if(n<=44){
    cout<<n-42<<"3456789"<<endl;
}
else{
    cout<<"123456789"<<endl;
}
    
}
get_out;
}