#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, k, v[101], soma = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= v[k] && v[i] > 0 && v[k] > 0)
            soma++;
    }

    cout << soma << endl;

    return 0;
}