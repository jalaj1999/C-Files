#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    vector<int> ab, ba;
    string s;
    cin >> s;

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            ab.push_back(i);
            i++;
        }
        else if (s[i] == 'b' && s[i + 1] == 'a')
        {
            ba.push_back(i);
            i++;
        }
    }
    if (ab.size() == ba.size())
    {
        cout << s << endl;
        return;
    }
    else if (ab.size() > ba.size())
    {
        
        cout << s << endl;
        return;
    }
    else if(ba.size() > ab.size())
    {
        s[ba[0]] = 'a';
        cout << s << endl;
        return;
    }
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
