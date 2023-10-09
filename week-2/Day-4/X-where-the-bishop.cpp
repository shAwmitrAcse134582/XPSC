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
    char a[8][8];
    for(ll i=0;i<8;i++){
        for(ll j=0;j<8;j++){
            cin>>a[i][j];
        }
    }
for(ll i=1;i<7;i++){
    for(ll j=1;j<7;j++){
        if(a[i][j]=='#' && a[i-1][j-1]=='#' && a[i+1][j+1]=='#' && a[i+1][j-1]=='#' && a[i-1][j+1]=='#'){
            cout<<i+1<<" "<<j+1<<endl;
            break;
        }
    }
}

    
}
get_out;
}