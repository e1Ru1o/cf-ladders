#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    ll n, m, v, c1, c2;
    cin >> n;
    vector<int> pos(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> v;
        pos[v] = i;
    }

    cin >> m;
    c1 = c2 = 0;
    while(m--){
        cin >> v;
        c1 += pos[v];
        c2 += n - pos[v] + 1;
    }
    cout << c1 << " " << c2 << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
