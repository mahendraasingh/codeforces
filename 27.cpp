#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int mini = 0;
        for(int i = 1; i < n; i++) {
            if(arr[i] < arr[mini]) {
                mini = i;
            }
        }
        arr[mini]++;
        int product = 1;
        for(int i = 0; i < n; i++) {
            product *= arr[i];
        }
        cout << product << endl;
    }
    return 0;
}
