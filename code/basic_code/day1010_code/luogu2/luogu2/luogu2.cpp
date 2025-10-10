#include<iostream>
using namespace std;
int main() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    int arr[n][n];
    for (int i = 0;i < m;i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = x1 - 1;j < x2 - 1;j++) {
            for (int k = y1 - 1;k < y2 - 1;k++) {
                arr[j][k]++;
            }
        }
    }

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}