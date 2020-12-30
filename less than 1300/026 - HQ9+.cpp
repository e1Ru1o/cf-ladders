#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    string s, ans[2] = {"NO\n", "YES\n"};
    cin >> s;
    
    int cant = 0;
    for(auto &x:"HQ9")
        cant += count(all(s), x);
    cout << ans[cant > 0];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
