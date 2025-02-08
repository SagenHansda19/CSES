#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    vector<char> stk;
    stk.push_back(s[0]);
    int i = 1, n = s.length();
    int ans = 1, in = 1;
    while(i < n) {
        if(s[i] == stk.back()) {
            in++;
        }
        else{
            in = 1;
        }
        stk.push_back(s[i]);
        i++;
        ans = max(ans, in);
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

