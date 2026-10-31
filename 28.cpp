#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long ans = 0;
        for (int i = 0; i < n - 1; i++) {
            long long product = 1LL * a[i] * a[i + 1];

            ans = max(ans, product);
        }
        cout << ans << endl;
    }

    return 0;
}
