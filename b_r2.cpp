#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int T = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << T << ": ";
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        int blocks = abs(n - 1) + abs(m - 1) + 1;
        if (n + m - 1 > a || n + m - 1 > b)
        {
            cout << "Impossible" << endl;
            T++;
            continue;
        }
        else
        {
            cout << "Possible" << endl;
            int A[n][m];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    A[i][j] = 1000;
                }
            }
            int left = 0;

            //top left to top right
            for (int j = 0; j < m; j++)
            {
                A[0][j] = 1;
                left += A[0][j];
            }
            //from top left to bottom right
            for (int i = 1; i < n - 1; i++)
            {
                A[i][m - 1] = 1;
            }
            A[n - 1][m - 1] = (a - (n + m - 2));
            b = b - left;
            for (int i = 1; i < n - 1; i++)
            {
                A[i][0] = 1;
                b = b - 1;
            }
            A[n - 1][0] = b;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << A[i][j] << " ";
                }
                cout << endl;
            }
        }
        cout << endl;
        T++;
    }
}
