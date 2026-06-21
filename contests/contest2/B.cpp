#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, h, v[1001], soma = 0;

    cin >> n >> h;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] <= h)
        {
            soma++;
            // cout << "soma 1" << endl;
        }
        else if (v[i] / 2 <= h)
        {
            soma += 2;
            // cout << "soma 2" << endl;
        }
    }

    cout << soma << endl;

    return 0;
}