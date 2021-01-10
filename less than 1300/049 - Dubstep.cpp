#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    string s;
    cin >> s;
    int n = s.size() + 3;

    s += "WUB$$$$";
    string ans = " ";
    for(int i = 0; i < n; ++i){
        if(s.substr(i, 3) == "WUB"){
            if(ans.back() != ' ')
                ans.push_back(' ');
            i += 2;
        }
        else ans.push_back(s[i]);
    }
    ans.pop_back();
    cout << ans.substr(1) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
