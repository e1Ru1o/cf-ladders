#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef int ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    matrix data(5, dlist(5));
    for(auto &l:data) for(auto &x:l)
        cin >> x;

    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            if(data[i][j]){
                cout << abs(i - 2) + abs(j - 2) << "\n";
                return;
            }
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
