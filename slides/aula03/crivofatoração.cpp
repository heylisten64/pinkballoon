#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int32_t main(){
    
    fastio;

    //crivo O(n log log n)
    vector<int> crivo(1e7+5, 0);

    for(int i=2; i<1e7; i++){
        if(crivo[i] == 0){
            crivo[i] = i;
            for(int j=i*i; j<=1e7; j+=i){
                if(crivo[j] == 0){
                    crivo[j] = i;
                }
            }
        }
    }

    int x;
    cin >> x;

    map<int, int> fats;

    while(x != 1){
        fats[crivo[x]]++;
        x /= crivo[x];
    }

    for(auto [p, e] : fats) cout << p << " " << e << endl;

    return 0;
}