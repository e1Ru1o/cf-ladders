#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n, m;
    string s;
    cin >> n >> m >> s;

    while(m--){
        for(int i = n - 1; i > 0; i--){
            if(s[i] == 'G' && s[i - 1] == 'B'){
                swap(s[i], s[i - 1]);
                i--;
            }
        }
    }
    
    cout << s << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
