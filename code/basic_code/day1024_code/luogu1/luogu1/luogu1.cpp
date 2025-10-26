#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int arr[10005] = { 0 };
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int index = 1, result = 1; 
    int temp=1;
    while (temp < k) {
        if (arr[index] != arr[index - 1]) {
            result = arr[index];
            temp++;
        }
        index++;
    }
    cout << result;
    return 0;
}