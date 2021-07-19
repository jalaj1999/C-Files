#include <bits/stdc++.h>
 
//by jalaj
using namespace std;
 
#define ll long long
int mod = 1e9 + 7;
#define Max 1000000009
int infinite = INT_MAX - 10;
void seive()
{
 bool prime[Max];
memset(prime, true,sizeof(prime));
for (int i = 2; i * i <= Max; i++)
{
 if (prime[i] == true)
{
for (int j = i * i; j <= Max; j += i)
{
prime[j] = false;
}
}
}
prime[0]=false;
prime[1]=false;
}
 
int countDigit(long long n)
{
    return floor(log10(n) + 1);
}
 
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return a > b ? gcd(b, b % a) : gcd(a, a % b);
}
 
void solve()
{
    map <int ,int > count;
    set <int>ans;
    int n,m,k;
    cin>>n>>m>>k;
    int l[k];
    for( int i=0; i<k;i++)
    {
        cin>>l[i];
        if( l[i]<=n)
        count[l[i]]++;
    }
    for( auto it=count.begin();it!=count.end();it++)
    {
        if( it->second>1)
        ans.insert(it->first);
    }
    cout<<ans.size()<<" ";
    for( auto it=ans.begin();it!=ans.end();it++)
    cout<<*it<<" ";
    cout<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
