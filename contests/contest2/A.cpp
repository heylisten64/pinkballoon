#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long count_a = 0, tam;
    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
            count_a++;
    }

    tam = s.length();

    while (count_a <= tam / 2)
        tam--;

    cout << tam << endl;

    return 0;
}