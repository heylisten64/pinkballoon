#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a = 0, b = 0, c = 0, d = 0, maior = 0;
    char aux;
    string aux2;

    cin >> n;

    while (n--)
    {
        cin >> aux;

        if (aux == 'l')
            a++;
        if (aux == 'I')
            b++;
        if (aux == '1')
            c++;
        if (aux == '|')
            d++;

        if (a > maior)
        {
            maior = a;
            aux2 = "Lucas";
        }
        if (b > maior)
        {
            maior = b;
            aux2 = "Isa";
        }
        if (c > maior)
        {
            maior = c;
            aux2 = "Amigo 1";
        }
        if (d > maior)
        {
            maior = d;
            aux2 = "Outro amigo";
        }
    }

    cout << aux2 << endl;

    return 0;
}
