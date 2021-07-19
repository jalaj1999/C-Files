#include <bits/stdc++.h>
//by jalaj
using namespace std;
#define ll long long

bool plusmin(int temp, int n, int a, int b)
{
    if (temp == n)
        return true;
    else if (temp > n)
        return false;

    return plusmin(temp *= a, n, a, b);
    return plusmin(temp +=b, n, a, b);
}
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (plusmin(1, n, a, b))
        cout << "Yes\n";
    else
        cout << "No\n";
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
