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
ll a,b;
cin>>a>>b;
ll mul=a;
ll cnt=0;
while(mul<=b){
    mul*=2;
    cnt++;
}

cout<<cnt<<endl;
get_out;
}