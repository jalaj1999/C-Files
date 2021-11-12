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
    int n, l;
    cin >> n >> l;
    double Max_l = -1;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        double sum = 0;

        sum = (double)(a[i] - a[i - 1]);
        if (sum > Max_l)
            Max_l = sum;
    }
    cout << setprecision(9) << max((double)max((a[0] - 0), (l - a[n - 1])), (Max_l / 2)) << endl;
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
