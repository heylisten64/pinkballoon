#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main (){
    ios::sync_with_stdio(0); cin.tie(0);

    long long n, q, x, r, l;

    //vetor de tamanho n 
    //q perguntas
    cin >> n >> q;
    vector<ll> psum(n+1, 0);

    //construindo meu vetor de soma de prefixos
    for(ll i=1; i<=n; i++){
        cin >> x;
        psum[i]=psum[i-1]+x;
    }

    //quero saber a soma de l a r
    while(q--){
        cin >> l >> r;
        cout << psum[r]-psum[l-1] << endl;
    }

    

    return 0;
}


/*
8 4
3 2 4 5 1 1 5 3
2 4
5 6
1 8
3 3
*/