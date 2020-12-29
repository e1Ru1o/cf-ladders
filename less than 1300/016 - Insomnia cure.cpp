#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n;
    vector<int> data(4);
    for(auto &x:data) cin >> x;
    cin >> n;

    int ans = 0;
    for(int i = 1; i <= n; ++i){
        for(auto &x:data){
            if(i % x == 0){
                ++ans;
                break;
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cout << setprecision(11) << fixed;

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
