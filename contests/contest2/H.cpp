#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b, c, soma = 0;

    cin >> n;

    while (n--)
    {
        cin >> a;

        soma += a;
    }

    if (soma >= 1)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}