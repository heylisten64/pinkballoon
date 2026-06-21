#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, k, x, y, pos = 1, fim, c = 0;
    vector<pair<int, int>> v(500002);
    cin >> n >> m >> k;
    // n cadeiras no auditorio
    // m numero de familias
    // k qtd pessoas familia komatsu

    for (int i = 0; i < m; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.begin() + m);

    for (int i = 0; i < m; i++)
    {
        if (v[i].first - pos >= k)
            c = 1;

        pos = v[i].first + v[i].second - 1;

        if (i == (m - 1) && n - pos >= k)
            c = 1;
    }

    if (m == 0 && n >= k)
        c = 1;

    if (c == 1)
        cout << "SIM" << endl;
    else
        cout << "NAO" << endl;

    return 0;
}