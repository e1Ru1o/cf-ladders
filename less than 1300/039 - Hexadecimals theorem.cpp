#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef vector<ll> dlist;
typedef vector<dlist> matrix;

void solve(){
    int n, m;
    cin >> n;
    
    if(n == 0) cout << "0 0 0\n";
    else if(n == 1) cout << "0 0 1\n";
    else{
        int a = 0, b = 1;
        while(b < n){
            a += b;
            swap(a, b);
        }
        b -= a;
        cout << a - b << " " << b << " " << b << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--) solve();

    return 0;
}//RUL0
