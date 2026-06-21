#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b, c;

    cin >> n;

    while (n--)
    {
        cin >> a >> b >> c;

        if (a + b >= 10 || a + c >= 10 || b + c >= 10)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}