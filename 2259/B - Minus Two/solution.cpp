#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int oddd = 0;
        int evenn0 = 0;
        int evenn2 = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if (x % 2 == 1) {
                oddd++;
            }
            else if (x % 4 == 0) {
                evenn0++;
            }
            else {
                evenn2++;
            }
        }
        cout << max({oddd, evenn0, evenn2}) <<endl;
    }
    return 0;
}