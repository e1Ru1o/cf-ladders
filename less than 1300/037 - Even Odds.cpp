#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    ll n, k;
    cin >> n >> k;
    
    ll even = n / 2, odd = n - even;
    if(k <= odd) cout << 2 * k - 1 << "\n";
    else cout << 2 * (k - odd) << "\n";
 }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
