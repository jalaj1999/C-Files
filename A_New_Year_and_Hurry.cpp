#include <bits/stdc++.h>

// by jalaj
using namespace std;

#define ll long long
ll static a[11] = {0};
void seT()
{
    a[0] = 5;
    for (int i = 1; i < 12; i++)
    {
        a[i] = ((i + 1) * 5) + a[i - 1];
    }
}

void solve()
{
    seT();
    ll n, k;
    cin >> n >> k;
    k = 240 - k;
    int ans = -1;
    for (int i = 0; i < 12; i++)
    {
        if (k < a[i])
        {
            ans = i;
            break;
        }
    }
    if (ans > n)
        cout << n;
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
