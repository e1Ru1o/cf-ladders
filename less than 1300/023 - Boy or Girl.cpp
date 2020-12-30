#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    string s; cin >> s;
    string ans[2] = {"CHAT WITH HER!\n", "IGNORE HIM!\n"};

    sort(all(s));
    s.resize(unique(all(s)) - s.begin());
    cout << ans[s.size() & 1];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
