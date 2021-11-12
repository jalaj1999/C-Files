#include <bits/stdc++.h>

// by jalaj
using namespace std;

#define ll long long

void solve()
{

    ll n;
    cin >> n;
    ll boy[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> boy[i];
    }
    ll m;
    cin >> m;
    ll girl[m] ;
    for (ll i = 0; i < m; i++)
    {
        cin >> girl[i];
    }
    ll ans=0;
    sort(boy,boy+n);
    sort(girl,girl+m);
    for(int i=0;i<n;i++) 
    for(int j=0;j<m;j++)
    {
        if( abs(boy[i]-girl[j])<=1)
        {
            girl[j]=10000;
            ans++;
            break;
        }
    }
    cout<<ans;
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
