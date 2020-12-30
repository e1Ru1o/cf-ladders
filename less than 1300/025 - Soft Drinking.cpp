#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    l *= k; c *= d;
    int cl, cc, cp, ans;
    ans = cl = cc = cp = 0;
    while(true){
        cc += n;
        cl += n * nl;
        cp += n * np;
        if(cl > l || cp > p || cc > c)
            break;
        ++ans;
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
