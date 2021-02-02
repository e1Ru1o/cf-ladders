#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    string s;
    cin >> s;

    string sub, cero = string(7, '0'), one = string(7, '1');
    for(int i = 0; i + 6 < s.size(); ++i){
        sub = s.substr(i, 7);
        if((sub == cero) || (sub == one)){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
