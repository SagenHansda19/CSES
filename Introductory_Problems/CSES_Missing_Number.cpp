#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n - 1);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        if(a[i] != i + 1) {
            cout << i + 1 << '\n';
            return;
        }
    }   
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

