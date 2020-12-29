#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n; cin >> n;
    
    while(true){
        ++n;
        set<int> s = {n % 10, (n / 10) % 10, (n / 100) % 10, n / 1000};
        if(s.size() == 4) break;
    }
    cout << n << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
