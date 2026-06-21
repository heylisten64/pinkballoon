#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, soma = 0;
    string s;
    cin >> n;

    while (n--)
    {
        cin >> s;

        if (s[0] == '+' || s[2] == '+')
        {
            soma++;
            // cout << "soma++" << endl;
        }
        else
            soma--;
    }

    cout << soma << endl;

    return 0;
}