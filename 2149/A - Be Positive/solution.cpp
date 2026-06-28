#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int neg = 0, zero = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            if (x == -1)
                neg++;
            else if (x == 0)
                zero++;
        }
 
        int ans = zero;
 
        if (neg % 2 == 1)
            ans += 2;
 
        cout << ans << "
";
    }
 
    return 0;
}