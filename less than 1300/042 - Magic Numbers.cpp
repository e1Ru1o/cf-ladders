#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    string s;
    cin >> s;
    
    bool ok = true;
    int ones  = count(all(s), '1');
    int fours = count(all(s), '4');
    ok &= (ones + fours == s.size());
    ok &= (s[0] != '4');
    for(int i = 0; i + 2 < s.size(); ++i)
        ok &= (s.substr(i, 3) != "444");
    string ans[2] = {"NO\n", "YES\n"};
    cout << ans[ok];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
