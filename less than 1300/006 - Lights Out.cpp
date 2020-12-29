#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef int ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int v;
    matrix data(5, dlist(5, 1));
    for(int i = 1; i <= 3; ++i){
        for(int j = 1; j <= 3; ++j){
            cin >> v;
            data[i - 1][j] += v;
            data[i + 1][j] += v;
            data[i][j + 1] += v;
            data[i][j - 1] += v;
            data[i][j] += v;
        }
    }
    for(int i = 1; i <= 3; ++i){
        for(int j = 1; j <= 3; ++j)
            cout << "01"[data[i][j] & 1]; 
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
