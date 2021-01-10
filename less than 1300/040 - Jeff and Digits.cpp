#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n, m;
    cin >> n;
    vector<int> data(n);
    for(auto &x:data) cin >> x;
    int sum = accumulate(all(data), 0);
    int ceros = n - (sum / 5);

    if(!ceros){
        cout << "-1\n";
        return;
    }

    while(sum % 9) sum -= 5;
    if(!sum) ceros = 1;
    cout << string(sum / 5, '5') << string(ceros, '0') << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
