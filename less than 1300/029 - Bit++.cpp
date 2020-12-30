#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef int ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    string s;
    int n; cin >> n;
    
    int ans = 0;
    while(n--){
        cin >> s;
        ans += count(all(s), '+');
        ans -= count(all(s), '-');
    }   
    cout << ans / 2 << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
