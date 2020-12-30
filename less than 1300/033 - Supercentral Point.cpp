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
    int n, m; 
    cin >> n;
    vector<int> val(n);
    vector<pi> data(n);
    for(auto &x:data)
        cin >> x.f >> x.s;

    auto check = [&](int i, int j){
        auto &a = data[i], &b = data[j];
        if(a.f == b.f){
            if(a.s < b.s) return 1;
            if(a.s > b.s) return 2;
        }
        if(a.s == b.s){
            if(a.f < b.f) return 3;
            if(a.f > b.f) return 4;
        }
        return 0;
    };

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j)
            val[i] |= (1 << check(i, j));
    }
    
    cout << count(all(val), 0b11111) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
