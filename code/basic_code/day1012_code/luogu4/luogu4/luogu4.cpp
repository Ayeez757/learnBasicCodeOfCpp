#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    int y[2002] = { 0 };
    int x[2002] = { 0 };
    int priceY = 1, priceX = 1;
    for (int i = 0;i < n - 1;i++) {
        cin >> y[i];
    }
    for (int i = 0;i < m - 1;i++) {
        cin >> x[i];
    }
    sort(y, y + n - 1, greater<int>());
    sort(x, x + m - 1, greater<int>());
    int indexX = 0, indexY = 0;
    long long result = 0;
    for (int i = 0;i < n + m - 2;i++) {
        if (y[indexY] <= x[indexX]&& x[indexX]!=0) {
            priceY++;
            result += x[indexX] * priceX;
            indexX++;
        }
        else {
            priceX++;
            result += y[indexY] * priceY;
            indexY++;
        }
    }
    cout << result;
    return 0;
}