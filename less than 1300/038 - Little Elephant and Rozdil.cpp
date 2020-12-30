#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n; cin >> n;
    vector<int> data(n);
    for(auto &x:data) cin >> x;
    
    int p  = min_element(all(data)) - data.begin();
    int rp = data.rend() - min_element(rall(data)) - 1;
    if(p == rp) cout << p + 1 << "\n";
    else cout << "Still Rozdil\n";
 }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
