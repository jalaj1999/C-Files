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
    memset(prime, true, sizeof(prime));
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
    prime[0] = false;
    prime[1] = false;
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
//  //'C' (cyan)
// 'M' (magenta)
// 'Y' (yellow)
// 'W' (white)
// 'G' (grey)
// 'B' (Black)
void solve()
{
    int n, m;
    cin >> n >> m;
    int c = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char a;
            cin >> a;
            if (a == 'C' || a == 'M' || a == 'Y')
                c++;
            else if (a == 'W' || a == 'G' || a == 'B')
                b++;
        }
    }
    if( c>0)
    cout<<"#Color";
    else
    cout<<"#Black&White";
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
