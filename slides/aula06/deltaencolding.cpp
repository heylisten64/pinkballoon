#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, k, l, r, x;
    //vetor com n numeros e quero k modificações
    cin >> n >> k;

    vector<ll> v(n+1);
    for(ll i=1; i<=n; i++){
        cin >> v[i];
    }

    vector<ll> delta(n+1, 0);
    while(k--){
        //intervalo de l a r adiciono x
        cin >> l >> r >> x;
        delta[l]=delta[l]+x;
        delta[r+1]=delta[r+1]-x;
    }

    //ajustar meu vetor delta
    for(ll i=1; i<=n; i++){
        delta[i]=delta[i]+delta[i-1];
    }

    //imprimindo o novo vetor com as modificaçoes
    for(ll i=1; i<=n; i++){
        cout << v[i]+delta[i] << " ";
    }

    return 0;

}