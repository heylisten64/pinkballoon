#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, aux;

    cin >> n;

    while (n--)
    {

        cin >> aux;

        if (aux >= 1900)
            cout << "Division 1" << endl;
        else if (aux >= 1600 && aux <= 1899)
            cout << "Division 2" << endl;
        else if (aux >= 1400 && aux <= 1599)
            cout << "Division 3" << endl;
        else if (aux <= 1399)
            cout << "Division 4" << endl;
    }
    return 0;
}