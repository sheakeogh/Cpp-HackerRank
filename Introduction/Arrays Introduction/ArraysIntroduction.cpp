#include <bits/stdc++.h>
using namespace std;

int main() {
    int size, num;

    cin >> size;
    int arr[size - 1];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for(int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
