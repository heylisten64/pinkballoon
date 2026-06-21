#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<long long> a(3);

    cin >> a[0] >> a[1] >> a[2];

    sort(a.begin(), a.begin() + a.size());

    if (a[2] - a[0] >= 10)
        cout << "check again" << endl;
    else
        cout << "final " << a[1] << endl;
    return 0;
}

// fazer anotacoes do sort