#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n, m, ans = 0;
    cin >> n >> m;

    for(int i = 0; i <= 1000; ++i){
        for(int j = 0; j <= 1000; ++j){
            if(i * i + j != n) continue;
            if(j * j + i != m) continue;
            ++ans;
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
