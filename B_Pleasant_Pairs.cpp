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

void solve()
{
    ll n, c = 0;//c=ans
    cin >> n;
    //n=3
    vector<ll> index(2 * n + 1, -1);
    //idex=0 2 0 0 0 3 1

    for (ll i = 1; i <= n; i++)
    {
        ll  a;
        cin >> a;
        index[a] = i;
    }
    for (ll i = 3; i < 2 * n; i++)
    //i=3   j==0->srqrt(i)   divisor(n) =i----n/i;
        for (ll j = 1; j * j <= i; j++)
        {
            if (i % j == 0 && index[j] != -1 && index[i / j] != -1 && j * j != i && index[j] + index[i / j] == i)
                c++;
        }
    cout << c << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
