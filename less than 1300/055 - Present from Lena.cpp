#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n, m;
    cin >> n;

    vector<string> data = {"0"};
    for(char i = '1'; i <= '0' + n; ++i){
        data.push_back(data.back());
        data.back() += ' ';
        data.back() += i;
    }   
    for(auto &x:data){
        auto temp = x.substr(0, x.size() - 1);
        reverse(all(temp));
        x += temp;
    }
    for(int i = n - 1; i >= 0; i--)
        data.push_back(data[i]);

    int sz = n * 2 + 1;
    for(auto &x:data)
        cout << setw(sz) << setfill(' ') << x << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
