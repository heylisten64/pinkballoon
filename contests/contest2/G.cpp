#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b, soma = 0;

    cin >> n;

    while (n--)
    {
        cin >> a >> b;

        if (b - a >= 2)
            soma++;
    }

    cout << soma << endl;

    return 0;
}