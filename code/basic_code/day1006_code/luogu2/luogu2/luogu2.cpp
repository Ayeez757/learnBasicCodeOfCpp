#include<iostream>
int main() {
    int l = 0, m = 0;
    std::cin >> l >> m;
    int arr[l + 1];
    for (int i = 0;i <= l;i++) {
        arr[i] = 0;
    }
    for (int i = 0;i < m;i++) {
        int start, end;
        std::cin >> start >> end;
        for (int i = start;i <= end;i++) {
            arr[i] = 1;
        }
    }
    int count = 0;
    for (int i = 0;i <= l;i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}