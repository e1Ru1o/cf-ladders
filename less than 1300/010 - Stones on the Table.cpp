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
    
    int cant = 0;
    char last = 'a';
    for(auto &x:s){
        cant += (x == last);
        last = x;
    }
    cout << cant << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
