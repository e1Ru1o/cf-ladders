#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef int ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n; cin >> n;
    matrix data(n, dlist(3));
    vector<int> cant(4);

    for(auto &l:data) 
        for(auto &x:l)
            cin >> x;
    
    for(auto &x:data)
        ++cant[accumulate(all(x), 0)];
    cout << cant[2] + cant[3] << "\n";    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
