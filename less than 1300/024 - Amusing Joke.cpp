#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    string a, b, c, ans[2] = {"NO\n", "YES\n"};
    cin >> a >> b >> c;

    vector<int> cant(30, 0);
    auto upd = [&](string s, int val){
        for(auto &x:s)
            cant[x - 'A'] += val;
    };

    upd(a, 1); upd(b, 1); upd(c, -1);
    cout << ans[count(all(cant), 0) == 30];    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
