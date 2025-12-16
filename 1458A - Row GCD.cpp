#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    long long diff_gcd = 0;

    for (int i = 1; i < n; i++) {
        diff_gcd = gcd(diff_gcd, abs(a[i] - a[0]));
    }

    for (int i = 0; i < m; i++) {
        long long ans = gcd(a[0] + b[i], diff_gcd);
        cout << ans << " ";
    }

    cout << "\n";
    return 0;
}
