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
ll a[n];
// map<ll,ll>mp;
vector<ll>mp(n+1,0);
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<=n){
        mp[a[i]]++;
    }
}
vector<ll>v;

ll mx=0;
// sort(a,a+n);
// ll un=unique(a,a+n)-a;
// if(n==1){
//     cout<<0<<endl;
// }
// else if(un==1){
//     cout<<n<<endl;
// }
// else{
//         for(ll i=0;i<n;i++){
//     for(ll j=1;j*j<=a[i];j++){
//         if(a[i]%j==0){
//             v.pb(j);
//             if(a[i]/j!=j){
//                 v.pb(a[i]/j);
//             }
//         }
//     }
//     cnt=0;
//     for(auto val:v){
//         for(ll k=0;k<n;k++){
//             if(a[k]==val){
//                 cnt++;
//             }
//             if(cnt>mx){
//                 mx=cnt;
//             }
//         }
//     } 
// v.clear();
// }
// if(mx==1){
//     cout<<0<<endl;
// }
// else cout<<mx<<endl;
// }
   for(ll i=1;i<=n;i++){
    ll cnt=0;
      for(ll j=1;j*j<=i;j++){
           if(i%j==0){
            cnt+=mp[j];
            if(i/j!=j){
                cnt+=mp[i/j];
            }
           }
      }
      mx=max(cnt,mx);
   }
   cout<<mx<<endl;
}
get_out;
}