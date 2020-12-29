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

    int p1 = max_element(all(data)) - data.begin();
    int p2 = data.rend() - min_element(data.rbegin(), data.rend()) - 1;

    int ans = p1 + n - 1 - p2 - (p1 > p2);    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
