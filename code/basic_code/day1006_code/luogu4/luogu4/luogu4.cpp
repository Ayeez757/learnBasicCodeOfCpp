#include<iostream>
#include<algorithm>
int main() {
    int n = 0, p = 0;
    std::cin >> n >> p;
    int arr[n];
    int diff[n + 2];
    for (int i = 0;i < n;i++) {
        std::cin >> arr[i];
    }
    for (int i = 0;i < n + 2;i++) {
        diff[i] = 0;
    }
    for (int i = 0;i < p;i++) {
        int start = 0;
        int end = 0;
        int plus = 0;
        std::cin >> start >> end >> plus;
        int left = start - 1;
        int right = end;
        diff[left] += plus;
        diff[right] -= plus;
    }
    // for (int i = 0;i < p;i++) {
    //     int start = 0, end = 0, plus = 0;
    //     std::cin >> start >> end >> plus;
    //     for (int j = start - 1;j < end;j+=2) {
    //         arr[j] += plus;
    //         arr[j+1]+=plus;
    //     }
    // }
    int sum = 0;
    for (int i = 0;i < n;i++) {
        sum += diff[i];
        arr[i] += sum;
    }
    int min = arr[0];
    for (int i = 0;i < n;i++) {
        min = std::min(arr[i], min);
    }
    std::cout << min << std::endl;
    return 0;
}