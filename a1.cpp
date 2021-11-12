#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int T = 1;
    cin >> t;
    while (t--)
    {

        map<char, int> c, v;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                v[s[i]]++;
            else
                c[s[i]]++;
        }
        int ans = 0;
        int csize = c.size();
        int vsize = v.size();
        //cout << csize << " " << vsize << "     -    ";
        if ((vsize == 0 && csize == 1) || (csize == 0 && vsize == 1))
        {
            cout << "Case #" << T << ": " << 0 << endl;
            T++;
            continue;
        }
        int ansc = 0;
        for (auto it = c.begin(); it != c.end(); it++)
        {
            ansc += it->second;
        }
        if (vsize > 1)
        {
            int max = -1;
            for (auto it = v.begin(); it != v.end(); it++)
            {
                ansc += it->second * 2;
                if (it->second > max)
                    max = it->second;
            }
            ansc -= max * 2;
        }
        int ansv = 0;
        for (auto it = v.begin(); it != v.end(); it++)
        {
            ansv += it->second;
        }
        if (csize > 1)
        {
            int max = -1;
            for (auto it = c.begin(); it != c.end(); it++)
            {
                ansv += it->second * 2;
                if (it->second > max)
                    max = it->second;
            }
            ansv -= max * 2;
        }

        cout << "Case #" << T << ": " << min(ansc, ansv) << endl;
        T++;
    }
}