#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;                 // number of elements
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long sum = 0;        // use long long to avoid overflow
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    cout << sum << '\n';
    return 0;
}
