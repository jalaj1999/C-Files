#include <bits/stdc++.h>

//by jalaj
using namespace std;

#define ll long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(0, 1 + max(b, c) - a) << ' ' << max(0, 1 + max(a, c) - b) << ' ' << max(0, 1 + max(b, a) - c) << '\n';
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
