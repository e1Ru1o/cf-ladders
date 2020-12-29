#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n, m;
    cin >> n >> m;

    int i = n + 1;
    for(; i <= m + 1; ++i){
        int cant = 0;
        for(int j = 2; j <= i; ++j)
            cant += (i % j == 0);
        if(cant == 1) break;
    }
    if(i == m) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
