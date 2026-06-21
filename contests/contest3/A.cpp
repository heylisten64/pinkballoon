#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b, c;

    cin >> n;

    while (n--)
    {

        cin >> a >> b >> c;

        if (a + b == c)
            cout << "+\n";
        else
            cout << "-\n";
    }

    return 0;
}