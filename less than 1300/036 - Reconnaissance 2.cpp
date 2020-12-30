#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n; cin >> n;
    vector<int> data(n);
    for(auto &x:data) cin >> x;
    data.push_back(data[0]);
    int best = 3000, idx;
    for(int i = 0; i < n; ++i){
        if(abs(data[i] - data[i + 1]) < best){
            best = abs(data[i] - data[i + 1]);
            idx = i;
        }
    }
    cout << ++idx << " " << (idx % n) + 1 << "\n";
 }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
