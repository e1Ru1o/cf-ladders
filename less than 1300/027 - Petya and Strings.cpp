#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    string a, b;
    cin >> a >> b;

    int ans = 0;
    for(int i = 0; i < a.size(); ++i){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
        if(a[i] != b[i]){
            ans = (b[i] < a[i]) - (a[i] < b[i]);
            break;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
