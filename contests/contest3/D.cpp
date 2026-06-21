#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    char aux;
    cin >> n;

    while (n--)
    {
        cin >> aux;

        if (aux == 'c' || aux == 'o' || aux == 'd' || aux == 'e' || aux == 'f' || aux == 'r' || aux == 's')
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}