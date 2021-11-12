#include <bits/stdc++.h>
//by jalaj
using namespace std;
#define ll long long
//  =-------   abcdefghijklmnopqrstuvwxyz

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    if (n < 26){
        cout << "NO";return;}

    sort(s.begin(), s.end());
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string a = "abcdefghijklmnopqrstuvwxyz";
    set<char> y;
    for (int i = 0; i < n; i++)
        y.insert(s[i]);
   if(y.size()==26)
   cout<<"YES";
   else
   cout<<"NO";
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
