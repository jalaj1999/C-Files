
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll block(ll k, ll n)
{
    ll ans = 0,power=1;
    vector<ll> v;
    while (k > 0)
    {
        v.push_back(k % 2);
        k = k / 2;
    }
    for (ll i = 0; i < v.size(); i++)
    {
        power=power%1000000007;
        ans += power * v[i];
        ans = ans % 1000000007;
        power=power*n;
        power=power%1000000007;
    }
    ans = ans % 1000000007;
    return ans;
}

// Driver Function
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << block(k, n);
        cout << endl;
    }
}
