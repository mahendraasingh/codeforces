#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d < b) {
            cout << -1 << "\n";
        } else {
            long long up_right = d - b;
            long long cur_x = a + up_right;
            if (cur_x < c) {
                cout << -1 << "\n";
            } else {
                long long left = cur_x - c;
                cout << up_right + left << "\n";
            }
        }
    }
    return 0;
}