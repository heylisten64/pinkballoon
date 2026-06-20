#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, l = 0, I = 0, a = 0, b = 0, maior = 0;
    string aux;
    char c;

    cin >> n;

    while (n--)
    {
        cin >> c;

        if (c == 'l')
            l++;
        else if (c == 'I')
            I++;
        else if (c == '1')
            a++;
        else if (c == '|')
            b++;

        if (l > maior)
        {
            maior = l;
            aux = "Lucas";
        }
        else if (I > maior)
        {
            maior = I;
            aux = "Isa";
        }
        else if (a > maior)
        {
            maior = a;
            aux = "Amigo 1";
        }
        else if (b > maior)
        {
            maior = b;
            aux = "Outro amigo";
        }
    }

    cout << aux << endl;

    return 0;
}