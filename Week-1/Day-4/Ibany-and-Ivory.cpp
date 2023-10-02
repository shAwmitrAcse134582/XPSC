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
ll a,b,c;
cin>>a>>b>>c;
ll i=0,j=0;
bool ok=true;
// while(a*i+b<=10000){
//     if(i*a+b==c){
//        ok=true;
//        break;
//     }
//     i++;
// }
// while(a+b*j<=10000 && ok==false){
//     if(a+b*j==c){
//        ok=true;
//        break;
//     }
//     j++;
// }
// ll k=0,l=0;
// while(a*k<=10000 && ok==false){
//     if(k*a==c){
//        ok=true;
//        break;
//     }
//     k++;
// }
// while(b*l<=10000 && ok==false){
//     if(b*l==c){
//        ok=true;
//        break;
//     }
//     l++;
// }
 
if(c%a==0 || c%b==0){
    cout<<"Yes"<<endl;
}
else if(a>c && b>c){
    cout<<"No"<<endl;
}
else if(c%(a+b)==0|| c%(a+b)==1){
    cout<<"Yes"<<endl;
}
else{
    for(ll i=0;i<=1000;i++){
        
        for(ll j=0;j<=1000;j++){
             if(a*i+b*j==c){
                // cout<<"hi"<<endl;
                cout<<"Yes"<<endl;
                ok=false;
              return 0;
            }
             else if((a*i+b*j>c)){
                //cout<<"hlw"<<endl;
               ok=true;
               
            }
        }
    }
    //cout<<"hi"<<endl;
    // cout<<ok<<endl;
    if(ok)cout<<"No"<<endl;
    //else cout<<"Yes"<<endl;
}
get_out;
}