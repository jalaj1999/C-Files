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
    int n, n1, n2;
    cin >> n >> n1 >> n2;
    int a[n], top = n - 1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    float mean1 = 0, mean2 = 0;
    int Min1 = min(n1, n2);
    int Max1 = max(n1, n2);
    for (int i = 0; i < Min1; i++)
    {
        mean1 += a[top];
        top--;
    }
    for (int i = 0; i < Max1; i++)
    {
        mean2 += a[top];
        top--;
    }
    
    mean1=mean1/Min1;
    mean2=mean2/Max1;
    cout<<setprecision(8)<<mean1+mean2;
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
