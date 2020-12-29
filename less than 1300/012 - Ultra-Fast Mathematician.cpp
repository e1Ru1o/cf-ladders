#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    string a, b;
    cin >> a >> b;

    for(int i = 0; i < a.size(); ++i)
        cout << "01"[a[i] ^ b[i]];
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
