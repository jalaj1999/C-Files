// dp problem 3

#include <bits/stdc++.h>
using namespace std;
int dp[46] ;
void d()
{
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i < 46; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
}
int cs(int n)
{
    return dp[n];
}

int a(int n)
{

    if (n < 0)
        return 0;
    else if (n == 0)
        return 1;

    int count = cs(n - 1) + cs(n - 2);
    return count;
}
int main()
{
    d();
    int n;
    cin >> n;
    cout << cs(n);
}