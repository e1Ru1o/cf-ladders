#include <bits/stdc++.h>

#define f first
#define s second
#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;
typedef pair<int, int> pi;

void solve(){
    ll a, b, c; 
    cin >> a >> b >> c;
    
    for(ll i = 1;; ++i){
        if(!(a % i) && !(b % i) && (c * i * i == a * b)){
            cout << 4 * (i + a/i + b/i) << "\n";
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
