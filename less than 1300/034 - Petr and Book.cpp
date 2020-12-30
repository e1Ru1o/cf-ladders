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
    vector<int> data(7);
    for(auto &x:data) cin >> x;

    int sum = 0;
    while(true){
        for(int i = 0; i < 7; ++i){
            sum += data[i];
            if(sum >= n){
                cout << i + 1 << "\n";
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
