#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;

bool isPalindrom(string x)
{
    int i = 0;
    int j = x.size() -1;
    while(i < j)
    {
        if(x[i] != x[j]) return false;
        i++;
        j--;
    }
    return true;
}
bool isEven(ll n)
{
    return n % 2 == 0;
}
bool isOdd(ll n)
{
    return n % 2 != 0;
}
bool isPrime(int n)
{
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0) return false;
    }
    return true;
}
ll gcd(ll a, ll b)
{
    if(a < b) swap(a, b);
    ll ans;
    int rem = 1;
    while(true)
    {
        rem = a % b;
        if(rem == 0) 
        {
            ans = b;
            break;
        }
        a = b;
        b = rem;
    }
    return ans;
}
vector<ll> primeFactors(ll n)
{
    vector<ll> factors;
    for(ll i = 2; i * i <= n; i++)
    {
        ll cnt = 0;
        while(n % i == 0)
        {
            cnt++;
            n /= i;
            factors.push_back(i);
        }
    }
    if(n > 1) factors.push_back(n);
    return factors;
}
ll digitSum(ll n)
{
    ll sum = 0;
       string num = to_string(n);
       for(int i = 0; i < num.size(); i++)
       {
           sum += (num[i] - '0');
    }
    return sum;
}
int main()
{
fast;
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
vector<ll>v,v2;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
}
//sort(v.begin(),v.end());
//reverse(v.begin(),v.end());
// for(ll i=1;i<n;i++){
//    for(ll j=0;j<i;j++){
//          ll x=abs(v[i]-v[j]);
//          v2.pb(x);
//    }
// }
// set<ll>st;
// for(auto val : v2){
//    st.insert(val);
// }
// if(st.size()==v2.size())yes;
// else no;
bool ok=false;
for(ll i=0;i<n;i++){
    for(ll j=i+1;j<n;j++){
        for(ll k=j+1;k<n;k++){
            if(v[j]-v[i]==v[k]-v[j]){
                ok=true;
                break;
            }
        }
    }
}
if(ok){
    no;
}
else yes;
    
}

get_out;
}