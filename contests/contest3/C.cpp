#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b, c;

    cin >> n;

    while (n--)
    {

        cin >> a >> b >> c;

        if ((a + b == c) || (a + c == b) || (c + b == a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}