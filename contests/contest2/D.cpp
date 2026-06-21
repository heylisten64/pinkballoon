#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b, c, soma = 0;

    cin >> n;

    while (n--)
    {
        cin >> a >> b >> c;

        if (a + b + c >= 2)
            soma++;
    }

    cout << soma << endl;

    return 0;
}