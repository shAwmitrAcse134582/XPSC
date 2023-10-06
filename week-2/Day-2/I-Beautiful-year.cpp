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
n=n+1;
while(1){
     ll a=n/1000;
     ll b=(n/100)%10;
     ll c=(n/10)%10;
     ll d=(n%10);
     if(a==b || a==c || a==d ||b==c||b==d||c==d){
        n++;
     }
     else{
        cout<<n<<endl;
        break;
     }
}





get_out;
}