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
bool check(string s)
{
    int len=s.length();
    const string lan1("abcdefghijklm");
    const string lan2("NOPQRSTUVWXYZ");
    int lan1len=0,lan2len=0;
    for(int j=0;j<s.length();j++)
    {
        
        if( (lan1.find(s[j])!=string::npos))
        lan1len++;
        else if(lan2.find(s[j])!=string::npos)
        lan2len++;
    }
    if( (lan1len==len)||(lan2len==len) )
    return true;
    else
    return false;

}
void solve()
{
    int k;
    cin>>k;
    int flag =0;
    for( int i =0;i<k;i++)
    {
        string s;
        cin>>s;
        if( check(s) )
        {
            flag++;
        }

    }
    if( flag==k)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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
