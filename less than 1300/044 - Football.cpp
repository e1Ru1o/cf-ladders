#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n;
    string a;
    map<string, int> m;

    cin >> n;
    while(n--){
        cin >> a;
        ++m[a];
    }
    int best = 0;
    for(auto &[x, y]:m){
        if(y > best)
            tie(a, best) = tie(x, y);
    }
    cout << a << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
