#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
        int mn = nums[0];
        int mx = nums[n - 1];
        long long ans = 0;
        if (mn == mx) {
            ans = 1LL * n * (n - 1);
        }
        else {
            int cntMin = 0;
            int cntMax = 0;
            for (int i = 0; i < n; i++) {
                if (nums[i] == mn) {
                    cntMin++;
                }
                if (nums[i] == mx) {
                    cntMax++;
                }
            }
            ans = 2LL * cntMin * cntMax;
        }
        cout << ans << endl;
    }
    return 0;
}
