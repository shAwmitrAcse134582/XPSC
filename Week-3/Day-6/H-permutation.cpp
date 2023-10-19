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
       cin >> n;
       ll arr[n][n-1];
       vector<ll> v;
       vector<ll> v2(n+1);
       for(ll i=0;i<n;i++){
          for(ll j=0;j<n-1;j++){
            cin >> arr[i][j];
          }
       }
       
          for(ll j=0;j<n-1;j++){
            v.pb(arr[0][j]);
            v2[arr[0][j]]=1;
          }
       
       ll temp;
       for(ll i=1;i<=n;i++){
            if(v2[i]==0){
                temp = i;
                break;
            }
       }
 
       // cout << temp << endl;
       ll index1=-1,index2=-1;
 
       for(ll i=1;i<n;i++){
          for(ll j=0;j<n-1;j++){
            if(arr[i][j] == temp){
                if(index1==-1){
                    index1=j;
                    break;
                }
            }
          }
       }
       // if(index1==n-1)cout << 
        for(ll i=1;i<n;i++){
          for(ll j=0;j<n-1;j++){
            if(arr[i][j] == temp){
                if(index2==-1 && j !=index1){
                    index2=j;
                    break;
                }
            }
          }
       }
 
 
       if(index1==0 && index2==-1){
 
        cout << temp << ' ';
         for(ll i=0;i<n-1;i++){
           
            cout << v[i] << ' ';
          }
        cout << endl;
 
       }
       else if(index1==n-2 && index2==-1){
 
       
         for(ll i=0;i<n-1;i++){
           
            cout << v[i] << ' ';
          }
        cout <<temp <<  endl;
 
       }
       else if(index2==-1){
             ll ans = max(index1,index2);
            for(ll i=0;i<n-1;i++){
                if(i==ans)cout << temp << ' ';
                cout << v[i] << ' ';
            }
            cout << endl;
       }
       else {
 
        ll ans = max(index1,index2);
        for(ll i=0;i<n-1;i++){
            if(i==ans)cout << temp << ' ';
            cout << v[i] << ' ';
        }
        cout << endl;
 
       }
 
    
}
get_out;
}