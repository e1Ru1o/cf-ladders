#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n, m;
    cin >> n;
    
    string ans[2] = {"NO\n", "YES\n"};
    vector<int> a(n), b(n), c(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i] >> b[i] >> c[i];
    bool ok = true;
    ok &= !accumulate(all(a), 0);
    ok &= !accumulate(all(b), 0);
    ok &= !accumulate(all(c), 0);
    cout << ans[ok];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
