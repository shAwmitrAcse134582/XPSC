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
ll a,b,c,x,y;
cin>>a>>b>>c>>x>>y;
// if(a==b&&b==c&&c==x&&x==y){
//     yes;
// }
// else{
//     ll p,q;
//     if(a<x){
//           p=abs(a-x);
//     }
// if(b<y){
//   q=abs(b-y);
// }
   
//     if(a>x && b>y){
//         yes;
//     }
//     else if(a>x&&b<y){
//         if(q<=c){
//             yes;
//         }
//         else{
//             no;
//         }

//     }
//     else if(a<x && b>y){
//              if(p<=c){
//                 yes;
//              }
//              else{
//                 no;
//              }
//     }
//     else{
//         if(p+q<=c){
//             yes;
//         }
//         else{
//             no;
//         }
 //    }
    
//}
   
        if(a+c>=x && b+c>=y && a+b+c>=x+y)
          yes;
        else
         no;
}
get_out;
}