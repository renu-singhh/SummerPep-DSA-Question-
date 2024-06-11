// https : // codeforces.com/problemset/problem/702/C
#include <bits/stdc++.h>
        using namespace std;

typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int j1 = 0, j2 = 0;
    int r = 0;
    while (j1 < n)
    {
        while (j2 < m && b[j2] < a[j1])
        {
            j2++;
        }
        int m1 = 1e9;
        if (j2 < m)
            m1 = b[j2] - a[j1];
        if (j2 > 0)
        {
            m1 = min(m1, a[j1] - b[j2 - 1]);
        }
        r = max(r, m1);
        j1++;
    }
    cout << r;
}