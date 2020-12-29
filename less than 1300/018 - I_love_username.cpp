#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n; cin >> n;
    vector<int> data(n);
    for(auto &x:data) cin >> x;

    int ans = 0;
    int base = data[0], top = data[0];
    for(auto &x:data){
        ans += (x > top) + (x < base);
        base = min(base, x);
        top = max(top, x);
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
