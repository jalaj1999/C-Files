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
    int a[5][5]={1};
    for( int i=1;i<=3;i++)
    {
        for( int j=1;j<=3;j++)
        {
            int k;
            cin>>k;
            if( k%2!=0 )
            {
                a[i][j]=!a[i][j];
                a[i][j+1]=!a[i][j+1];
                a[i+1][j]=!a[i+1][j];
                a[i-1][j]=!a[i-1][j];
                a[i][j-1]=!a[i][j-1];
            }
        }
    }
      for( int i=1;i<=3;i++)
    {
        for( int j=1;j<=3;j++)
        {
       cout<<!a[i][j];
            
        }
        cout<<endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
