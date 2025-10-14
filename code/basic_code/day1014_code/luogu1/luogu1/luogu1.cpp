#include<iostream>
using namespace std;
int main() {
    int t = 0, x = 0, y = 0, z = 0, l = 0, r = 0, result = 0;
    cin >> t;
    for (int i = 0;i < t;i++) {
        cin >> l >> r;
        int diff = r - 2 * l;
        if (diff <= 0) {
            cout << '0' << endl;
            continue;
        }
        result = (r - 2 * l + 2) * (r - 2l + 1) / 2;
        cout << result << endl;
    }
    return 0;
}