#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, A = 0, D = 0;
    char aux;

    cin >> n;

    while (n--)
    {
        cin >> aux;

        if (aux == 'A')
            A++;
        else
            D++;
    }

    if (A > D)
        cout << "Anton" << endl;
    else if (D > A)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}