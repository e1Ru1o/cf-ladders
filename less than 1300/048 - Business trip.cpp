#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n;
    cin >> n;
    vector<int> data(12);
    for(auto &x:data) cin >> x;
    sort(all(data));

    int cant = 0, sum = 0;
    while((sum < n) && !data.empty()){
        sum += data.back();
        data.pop_back();
        ++cant;
    }
    if(sum < n) cant = -1;
    cout << cant << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
