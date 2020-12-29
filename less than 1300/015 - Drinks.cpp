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

    int amount = accumulate(all(data), 0);
    cout << 1.0 * amount / n << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cout << setprecision(11) << fixed;

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
