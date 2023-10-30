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
bool aresame(double a,double b){
    return fabs(a-b)<1e-15;
}
int main()
{
fast;
double n;
cin>>n;
double l=0.0;
double r=n;

while((r-l)>=1e-15){
    double mid=l+(r-l)/2;
    double val=mid*mid;
    if(aresame(val,n)){
        cout<<mid<<endl;
        break;
    }
    else if(val>n){
        r=mid;
    }
    else{
        l=mid;
    }
}
get_out;
}