#include <bits/stdc++.h>
#define N 50010
using namespace std;
typedef long long LL;
LL p[N];
LL k;
int cut(int, int);
int main() {
    LL i, n;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    cout << cut(0, n - 1);
    return 0;
}
int cut(int right, int left) {
    if (left - right < 2) return 0; // Changed condition from 3 to 2
    LL K = 0; // Initialize K
    LL counttemp = 0; // Initialize counttemp
    LL min = LLONG_MAX; // Initialize min
    LL cutdot = 0; // Initialize cutdot
    for (LL m = right + 1; m < left; m++) { // Changed left+1 to left
        LL temp = 0;
        for (LL j = right; j < left; j++) { // Changed left+1 to left
            if (j > m) {
                temp += (j - m) * p[m];
            } else {
                temp += (m - j) * p[m];
            }
        }
        if (temp < min) {
            min = temp;
            cutdot = m;
        }
    }
    K++; // Increment K
    // Accumulate the cost of cutting recursively
    return min + cut(right, cutdot) + cut(cutdot, left);
}
