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
int n;
        cin>>n;
        vector<int>vc[101];
        int ans[n];
        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            vc[x].pb(i);
        }
        int cnt=0;
        for(auto x:vc) if(x.size()>1) cnt++;
        if(cnt>=2) {
            int f=0;
            for(int i=1; i<=100; i++) {
                if(vc[i].size()==1) {
                    ans[vc[i][0]]=1;
                }
                else if(vc[i].size()>1) {
                    if(!f) {
                        ans[vc[i][0]]=1;
                        for(int j=1; j<vc[i].size(); j++) ans[vc[i][j]]=2;
                        f=1; 
                    }
                    else{
                        ans[vc[i][0]]=1;
                        for(int j=1; j<vc[i].size(); j++) ans[vc[i][j]]=3;
                    }
                }
            }
            for(auto x:ans) cout<<x<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    
}
get_out;
}