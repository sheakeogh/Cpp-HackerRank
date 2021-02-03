#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c, d, e;
    int sizeA, sizeB;

    cin >> a >> b;

    sizeA = a.size();
    sizeB = b.size();
    c = a + b;
    d = b[0];
    e = a[0];

    for(int i = 1; i < sizeA; i++) {
        d += a[i];
    }

    for(int j = 1; j < sizeB; j++) {
        e += b[j];
    }

    cout << sizeA << " " << sizeB << endl;
    cout << c << endl;
    cout << d << " " << e << endl;

    return 0;
}
