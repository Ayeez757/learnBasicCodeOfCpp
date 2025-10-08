#include<iostream>
#include<algorithm>
int main() {
    int n = 0, p = 0;
    std::cin >> n >> p;
    int arr[n];
    for (int i = 0;i < n;i++) {
        std::cin >> arr[i];
    }
    for (int i = 0;i < p;i++) {
        int start = 0, end = 0, plus = 0;
        std::cin >> start >> end >> plus;
        for (int j = start - 1;j < end;j++) {
            arr[j] += plus;
        }
    }
    int min = arr[0];
    for (int i = 0;i < n;i++) {
        min = std::min(arr[i], min);
    }
    std::cout << min << std::endl;
    return 0;
}