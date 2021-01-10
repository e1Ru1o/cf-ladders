#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    ll n, m, v;
    cin >> n >> m;
    
    ll pos = 1, ans = 0;
    while(m--){
        cin >> v;
        ans += v + n * (v < pos) - pos;
        pos = v;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
