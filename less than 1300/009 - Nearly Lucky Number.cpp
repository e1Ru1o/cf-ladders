#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    string s;
    cin >> s;

    int n = count(all(s), '4') + count(all(s), '7');
    string ans[2] = {"NO\n", "YES\n"};
    cout << ans[n == 4 || n == 7];    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
