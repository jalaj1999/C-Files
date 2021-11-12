#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    int T = 1;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 0 || n == 1)
        {
            cout << "Case #" << T << ": " << 0 << endl;
            T++;
            continue;
        }
        int l = 0, r = 0;
        bool left = 0, right = 0;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            int l = 0, r = 0;
            bool left = 0, right = 0;
            for (int j = i; j < s.size(); j++)
            {
                if (left == 0 && s[j] == 'O')
                {
                    left = 1;
                    l++;
                }
                if (left == 1 && s[j] == 'X')
                {
                    left = 0;
                    l++;
                }
                if (right == 0 && s[j] == 'X')
                {
                    right = 1;
                    r++;
                }
                if (right == 1 && s[j] == 'O')
                {
                    right = 0;
                    r++;
                }
                ll k = min(l, r);
                ans += k;
                ans %= 1000000007;
            }
        }
        cout << "Case #" << T << ": " << ans << endl;

        T++;
    }
}
