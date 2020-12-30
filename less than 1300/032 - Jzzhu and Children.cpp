#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n, m; 
    cin >> n >> m;
    vector<int> data(n);
    for(auto &x:data) cin >> x;

    int ans, mx = 0;
    for(int i = 0; i < n; ++i){
        int d = (data[i] + m - 1) / m;
        if(d >= mx){
            ans = i + 1;
            mx = d;
        }
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
