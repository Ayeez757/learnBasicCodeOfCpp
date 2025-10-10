#include<iostream>
using namespace std;
int main() {
    int n;
    int m;
    cin >> n >> m;
    int arr[5002][5002] = { 0 };
    for (int i = 0;i < m;i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        arr[x1][y1]++;
        arr[x1][y2 + 1]--;
        arr[x2 + 1][y1]--;
        arr[x2 + 1][y2 + 1]++;
    }
    long long sum = 0;
    for (int i = 1;i < n + 1;i++) {
        for (int j = 1;j < n + 1;j++) {
            arr[i][j] += arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1];
            sum += ((i + j) ^ arr[i][j]);
            // cout<<arr[i][j]<<" ";
        }
        // cout<<endl;
    }
    cout << sum;


    return 0;
}
