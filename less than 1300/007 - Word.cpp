#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;
typedef function<char(char)> func;

void solve(){
    string s;
    cin >> s;

    int cant = 0;
    for(auto &x:s)
        cant += bool(islower(x));
    int other = s.size() - cant;
    
    func foo[2] = {
        [](char x){return tolower(x);}, 
        [](char x){return toupper(x);},
    };
    if(other > cant) swap(foo[0], foo[1]);
    for(auto &x:s) cout << foo[0](x);
    cout << "\n";   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();


    return 0;
}//RUL0
