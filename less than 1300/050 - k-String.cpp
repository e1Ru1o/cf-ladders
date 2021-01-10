#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    vector<int> data(30);
    for(auto &x:s)
        ++data[x - 'a'];

    vector<string> ans;
    for(int i = 0; i < 30; ++i){
        if(data[i] % n){
            cout << "-1\n";
            return;
        }
        ans.push_back(string(data[i] / n, 'a' + i));
    }
    while(n--) for(auto &x:ans)
        cout << x;
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
