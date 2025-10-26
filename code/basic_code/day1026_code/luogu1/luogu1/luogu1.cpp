#include<iostream>
using namespace std;
int arr[1000005];
int main() {
    int n = 0;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int count = 0;
    int temp = 0;
    for (int i = 0;i < n;i++) {
        while (i < n) {
            
            if (arr[i] == i + 1) {
                i++;
                continue;
            }
            temp = arr[arr[i] - 1];
            arr[arr[i] - 1] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
    cout << count;
    return 0;
}