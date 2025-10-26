#include<iostream>
using namespace std;
int main() {
    int n = 0, a = 0, b = 0, g = 0, k = 0, x = 0, y = 0;
    int arrA[10005] = { 0 }, arrB[10005] = { 0 }, arrG[10005] = { 0 }, arrK[10005] = { 0 };
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> a >> b >> g >> k;
        arrA[i] = a;
        arrB[i] = b;
        arrG[i] = g;
        arrK[i] = k;
    }
    cin >> x >> y;
    for (int i = n-1;i >= 0;i--) {
        if (arrA[i]<=x && arrB[i]<=y && arrA[i] + arrG[i]>=x && arrB[i] + arrK[i]>=y) {
            cout << i+1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}