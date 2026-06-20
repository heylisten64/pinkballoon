#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define ll long long
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define rep(i, a, b) for(int i = a; i < b; i++)
#define sz(s) (int)s.size()
#define all(x) x.begin(), x.end()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef tuple<int, int, int> tii;
constexpr int mod=1e9+7, oo=1e15, MAX=1e5;
vector<pii> dirs = {{1,0}, {-1, 0}, {0, 1}, {0, -1}};

void solve(){
    int n;
    cin >> n;
    int pos = log2(n);
    int x = (1<<pos)-1;
    cout << x << endl;
}	

int32_t main(){
    fastio;

    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
}