#include <bits/stdc++.h>

// by jalaj
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
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll ans, ans1,ans2;
    ans1 = min((((n / m) * b) + ((n % m) * a)), (((n / m) * b) + (((n % m) * b))));
    //cout<<ans1<<endl;
    ans2=min(ans1,(((n / m) * b)+(b)));

    ans = min(ans2, (n * a));
    if (m > n)
        cout << min(ans, b);
    else
        cout << ans;
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
