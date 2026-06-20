#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, aux, impar = 0, par = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> aux;

        if (i % 2 != 0)
            impar += aux;
        else
            par += aux;
    }

    if (impar > par)
        cout << impar << endl;
    else
        cout << par << endl;

    return 0;
}
