#include <bits/stdc++.h>

//by jalaj
using namespace std;

#define ll long long
int mod = 1e9 + 7;
#define Max 1000000009
int infinite = INT_MAX - 10;
struct Interval
{
    ll s, e;
};
bool mycomp(Interval a, Interval b)
{
    return a.s < b.s;
}

ll mergeIntervals(Interval arr[], ll n)
{
    sort(arr, arr + n, mycomp);
    ll index = 0; 
    for (ll i = 1; i < n; i++)
    {
        if (arr[index].e >= arr[i].s)
        {
            arr[index].e = max(arr[index].e, arr[i].e);
            arr[index].s = min(arr[index].s, arr[i].s);
        }
        else
        {
            index++;
            arr[index] = arr[i];
        }
    }
    ll points=0;
    for (int i = 0; i <= index; i++)
        points+=abs(arr[i].e-arr[i].s);
    return points;
}

void solve()
{
    ll n, k, f;
    cin >> n >> k >> f;
    Interval arr[n];
    ll points = 0;
    for (ll i = 0; i < n; i++)
    {
        ll S, E;
        cin >> S >> E;
        arr[i] = {S, E};
    }
    ll ans=mergeIntervals(arr, n);
    ans=f-ans;
    if(ans >=k)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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
