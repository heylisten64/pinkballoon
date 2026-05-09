#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q, r;
    int resp = 1;

    cin >> q;

    cin >> r;

    for (int i = 0; i < q.size(); i++)
    {
        for (int j = 0; j < r.size(); j++)
        {
            if (r[j] == q[i] && r[j] != 'x' && q[i] != 'x')
            {
                r[j] = 'x';
                q[i] = 'x';
                j++;
            }
        }
    }

    for (int a = 0; a < r.size(); a++)
    {
        if (r[a] != 'x')
            resp = 0;
    }

    for (int b = 0; b < q.size(); b++)
    {
        if (q[b] != 'x')
            resp = 0;
    }

    if (resp == 0)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}
