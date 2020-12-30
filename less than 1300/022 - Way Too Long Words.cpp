#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    string s;
    cin >> s;
    
    if(s.size() <= 10)
        cout << s << "\n";
    else
        cout << s[0] << s.size() - 2 << s.back() << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}//RUL0
