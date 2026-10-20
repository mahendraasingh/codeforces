#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a + c > b) {
            cout << "First\n";
        } else {
            cout << "Second\n";
        }
    }
    return 0;
}