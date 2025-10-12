#include<iostream>
using namespace std;
int main() {
    int w = 0;
    int n = 0;
    int p[30002];
        cin >> w >> n;
    for (int i = 0;i < n;i++) {
        cin >> p[i];
    }
    int temp = 0;
    for (int i = n;i >= 0;i--) {
        for (int j = 0;j < i;j++) {
            if (p[j] > p[j + 1]) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j] = temp;
            }
        }
    }
    int left = 0;
    int right = n;
    int result = 0;
    while (left != right) {
        if (p[left] + p[right] <= w) {
            result++;
            left++;
            right--;
        }
        else if (p[left] + p[right] > w) {
            right--;
            result++;
        }
    }
    cout << result;
    return 0;
}