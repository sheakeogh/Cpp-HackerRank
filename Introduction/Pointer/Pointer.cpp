#include <bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    int sum = *a + *b;
    int diff = abs(*b - *a);

    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a >> b;
    update(pa, pb);
    cout << a << endl;
    cout << b << endl;

    return 0;
}
