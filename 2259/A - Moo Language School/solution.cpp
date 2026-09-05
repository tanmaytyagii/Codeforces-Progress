#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int forcedSchoolsss = 0;
        for (int i = 0; i < n; i += k) {
            bool possible = false;
            for (int j = i; j < i + k; j++) {
                if (s[j] == '0') {
                    possible = true;
                    break;
                }
            }
            if (!possible)
                forcedSchoolsss++;
        }
        cout << forcedSchoolsss << endl;
    }
    return 0;
}