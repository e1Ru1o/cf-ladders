#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    string s;
    cin >> s;

    int cant = 0;
    for(auto &x:s)
        cant += (x >= 'a');
    int other = s.size() - cant;
    
    string characters = string(26, ' ');
    iota(all(characters), "aA"[other > cant]);
    for(auto &x:s)
        cout << characters[x - "Aa"[x >= 'a']];
    cout << "\n";   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();


    return 0;
}//RUL0
