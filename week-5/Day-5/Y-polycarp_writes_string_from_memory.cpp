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
   string s;
   cin>>s;
   set<char>st;
   ll cnt=1;
   for(ll i=0;i<s.size();i++){
    st.insert(s[i]);
    if(st.size()==4){
        cnt++;
        st.clear();
        st.insert(s[i]);
    }

   }
   //
   cout<<cnt<<endl;
   
}
get_out;
}