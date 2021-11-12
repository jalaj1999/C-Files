#include <bits/stdc++.h>

//by jalaj
using namespace std;

#define ll long long

struct Interval
{
    int start, end;
};

bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

void mergeIntervals(Interval arr[], int n, int m)
{
    if (n <= 0)
        return;

    stack<Interval> s;
    sort(arr, arr + n, compareInterval);
    s.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        Interval top = s.top();
        if (top.end < arr[i].start)
            s.push(arr[i]);
        else if (top.end < arr[i].end)
        {
            top.end = arr[i].end;
            s.pop();
            s.push(top);
        }
    }
    //cout << "\n The Merged Intervals are: ";
    vector<Interval> k;
    while (!s.empty())
    {
        Interval t = s.top();
        k.push_back(t);
        s.pop();
    }

    int tio = k.size();
    if (tio > 1)
        cout << "NO\n";
    else
    {
        if (m > k[0].end)
        {
            cout << "NO\n";
        }
        else if (k[0].start != 0)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    Interval a[n];
    for (int i = 0; i < n; i++)
    {
        int s, e;
        cin >> s >> e;
        a[i].start = s;
        a[i].end = e;
    }

    mergeIntervals(a, n, m);
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
