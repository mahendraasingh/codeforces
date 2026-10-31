#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int mx = max({a, b, c});
        int x = (a == mx && a != b && a != c) ? 0 : mx - a + 1;
        int y = (b == mx && b != a && b != c) ? 0 : mx - b + 1;
        int z = (c == mx && c != a && c != b) ? 0 : mx - c + 1;
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}
