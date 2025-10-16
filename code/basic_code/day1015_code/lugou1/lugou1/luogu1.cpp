#include<iostream>
using namespace std;
int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    int arr[1000] = { 0 };
    for (int i = 0;i < m;i++) {
        int temp = 0;
        cin >> temp;
        arr[temp]++;
    }
    for (int i = 0;i <= n;i++) {
        for (int j = 0;j < arr[i];j++) {
            cout << i;
        }
    }
    return 0;
}
