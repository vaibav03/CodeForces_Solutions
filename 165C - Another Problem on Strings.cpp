#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;

    long long ans = 0;

    if (k == 0) {
        long long zeros = 0;
        for (char c : s) {
            if (c == '0') zeros++;
            else {
                ans += zeros * (zeros + 1) / 2;
                zeros = 0;
            }
        }
        ans += zeros * (zeros + 1) / 2;
    } else {
        vector<long long> freq(s.size() + 1, 0);
        freq[0] = 1;

        int pre = 0;
        for (char c : s) {
            if (c == '1') pre++;
            if (pre >= k) ans += freq[pre - k];
            freq[pre]++;
        }
    }

    cout << ans << '\n';
    return 0;
}
