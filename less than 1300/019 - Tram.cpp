#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; ++i) 
        cin >> a[i] >> b[i];

    int people = 0, ans = 0;
    for(int i = 0; i < n; ++i){
        people += b[i] - a[i];
        ans = max(ans, people);
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
