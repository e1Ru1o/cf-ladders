#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n; cin >> n;

    if(n & 1) cout << "-1\n";
    else{
        vector<int> data(n);
        iota(all(data), 1);
        reverse(all(data));
        for(auto &x:data)
            cout << x << " \n"[&x == &data.back()];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
