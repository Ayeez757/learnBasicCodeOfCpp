#include<iostream>
using namespace std;
int main() {
    int n;
    int m;
    int arr[n + 2][n + 2] = { 0 };
    for (int i = 0;i < m;i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        arr[y1][x1]++;
        arr[y1][x2 + 1]--;
        arr[y2 + 1][x1]--;
        arr[y2 + 1][x2 + 1]++;
    }
    for (int i = 1;i < n + 1;i++) {
        for (int j = 1;j < n + 1;j++) {
            arr[i][j] += arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1];
            cout << arr[i][j];
        }
    }


    return 0;
}