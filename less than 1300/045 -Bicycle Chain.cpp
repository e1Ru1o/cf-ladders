#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(auto &x:a) cin >> x;
    cin >> m;
    vector<int> b(m);
    for(auto &x:b) cin >> x;
    
    int ratio = 0, cant = 0;
    for(auto &x:a) for(auto &y:b){
        if(y % x == 0){
            int r = y / x;
            if(r > ratio)
                tie(ratio, cant) = make_tuple(r, 0);
            cant += (r == ratio);
        }
    }
    cout << cant << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
