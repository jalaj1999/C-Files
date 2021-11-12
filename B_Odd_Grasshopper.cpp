#include <bits/stdc++.h>

// by jalaj
using namespace std;

#define ll long long
ll sum(ll a, ll n, ll d)
{
    ll SUM = 0;
    SUM += ((2 * a) + ((n - 1) * d));
    SUM = SUM / 2;
    SUM*=n;
    return SUM;
}

void solve()
{
    //cout<< sum(1,3,8)<<endl;
    ll x, n;
    cin >> x >> n;
    ll a, b;
    if (n == 1)
    {
        a = 1;
        b = 0;
    }
    else if (n == 2)
    {
        a = 1;
        b = 2;
    }
    else
    {

        if (n % 2 == 0)
        {                 // 8
            ll N = n / 2; // 4
            if (N % 2 == 0)
            {                   // 01 23 45 67 8
                ll n1 = N / 2; // 2
                ll n2 = N / 2; // 2
                a = sum(1, n1, 8);
                b = sum(5, n2, 8);
                a += n;
            }
            else
            {
                ll n1= N- N/2;
                ll n2= N/2;
                 a = sum(1, n1, 8);
                b = sum(5, n2, 8);
                b += n;
            }
        }
        else
        {
            // n=5
            ll N = (n + 1) / 2;              // N=3
            ll n1 = N - (N / 2), n2 = N / 2; // n1=2, n2= 1
            a = sum(1, n1, 8);
            b = sum(5, n2, 8);
        }
    }

   //cout << a << " " << b << endl;
    if (x % 2 != 0)
        cout << x + a - b << endl;
    else
        cout << x - a + b << endl;
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
