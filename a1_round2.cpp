#include <bits/stdc++.h>
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
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'X' && left == 0)
            {
                right = 0;
                l++;
                left = 1;
            }
            else if (s[i] == 'O' && right == 0)
            {
                left = 0;
                r++;
                right = 1;
            }
        }
        if(l+r!=0)
        cout << "Case #" << T << ": " << l + r - 1 << endl;
        else
        cout << "Case #" << T << ": " << l + r  << endl;
        T++;
    }
}
