#include<iostream>
#include<algorithm>
int main() {
    int l = 0, m = 0;
    std::cin >> l, m >> std::endl;
    int arr[l];
    for (int i = 0;i < l, i++) {
        arr[i] = i;
    }
    for (int i = 0;i < m;i++) {
        int start, end;
        std::cin >> start, end >> std::endl;
        int smaller = std::min(end - start;l - end);
        int endTemp = end;
        for (end;end < smaller;end++) {
            arr[start + end - endTemp] = arr[end + 1 + end - endTemp];
        }

    }
    return 0;
}