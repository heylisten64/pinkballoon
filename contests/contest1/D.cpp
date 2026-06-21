#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    long long a = 0, b = 0, c = 0, d = 0, e = 0;

    cin >> s1;
    cin >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == 'A')
            a++;
        else if (s1[i] == 'B')
            b++;
        else if (s1[i] == 'C')
            c++;
        else if (s1[i] == 'D')
            d++;
        else if (s1[i] == 'E')
            e++;

        if (s2[i] == 'A')
            a--;
        else if (s2[i] == 'B')
            b--;
        else if (s2[i] == 'C')
            c--;
        else if (s2[i] == 'D')
            d--;
        else if (s2[i] == 'E')
            e--;
    }

    if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}