#include <bits/stdc++.h>
using namespace std;

int maxNum(int a, int b, int c, int d) {
    int max = a;

    if(b > max) {
        max = b;
    }
    if(c > max) {
        max = c;
    }
    if(d > max) {
        max = d;
    }

    return max;
}

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int ans = maxNum(a, b, c, d);

    cout << ans;

    return 0;
}
