#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll get(string s, string temp)
{
    ll result = 0;
    ll N = s.length();
    string z = temp;
    while (s.length() > 0 and temp.length() > 0)
    {
        if (s.back() == temp.back())
        {
            temp.pop_back();
        }
        else
        {
            result++;
        }
        s.pop_back();
    }
    if (temp.length() == 0)
        return result;
    return N;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        if(s.length()<2) {
            cout << s.length() << '\n';
        } else {
            cout << min({get(s,"00"),get(s,"25"),get(s,"50"),get(s,"75")}) << '\n';
        }
    }
}