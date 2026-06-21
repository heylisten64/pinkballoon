#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x, par = 0, impar = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;

        if (i % 2 == 0)
            par += x;
        else
            impar += x;
    }

    if (par > impar)
        cout << par << endl;
    else
        cout << impar << endl;

    return 0;
}