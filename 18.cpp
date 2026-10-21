#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int fcost = 0;
    for (int i = 1; i <= w; i++) {
        fcost += k * i;
    }
    if (fcost > n) {
        cout << fcost - n;
    } else {
        cout << 0;
    }

    return 0;
}
