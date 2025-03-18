#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll y, x;
    cin >> y >> x;
    ll mm = max(y, x);
    ll ar = (mm - 1) * (mm - 1);
    if(mm % 2 == 0) {
        if(x > y) {
            cout << ar + y << '\n';
        } else {
            cout << (mm * mm) - x + 1 << '\n';
        }
    } else {
        if(x > y) {
            cout << (mm * mm) - y + 1 << '\n';
        } else {
            cout << ar + x << '\n';
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

