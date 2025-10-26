#include<iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    int arr[300005] = { 0 };
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int result = 0;
    for (int i = 0;i < n;i++) {
        int leftIndex = i, rightIndex = i;
        int count = 0;
        int meizhaodao = 0;
        if (arr[i] > n) {
            continue;
        }
        while (count<arr[i]-1) {
            if (count < arr[i] - 1) {
                if (leftIndex > 0) {
                    leftIndex--;
                    if (arr[leftIndex] < arr[i]) {
                        count++;
                    }
                }
                else {
                    meizhaodao++;
                    break;
                }
            }
            if (meizhaodao > 0) {
                continue;
            }
        }//现在是找到左边界了并且result++
        while (true) {
            if (leftIndex == i) {
                break;
            }
            if (rightIndex < n ) {
                leftIndex++;
                while (1 == 1) {
                    if (arr[leftIndex - 1] < arr[i]) {
                        rightIndex++;
                        if (arr[rightIndex] < arr[i]) {
                            result++;
                            break;
                        }
                    }
                }
            }
            else {
                break;
            }
        }
    }
    cout << result;
    return 0;
}
/*
记录每个元素能在几个数组中构成不动点
遍历元素组每个元素，然后往前找几位，直到自己刚好在不动点的位置，计数+1，
减少元素前面的一个数，那元素后面必然要增加数，右边边界往右移动，直到出现第一个比元素小的数，
这样就构成了第二个不动点。计数+1
以此类推，直到子数组左边界到达元素，这是最后一次移动右边界，然后找到那个比元素小的数字后
让元素刚好为不动点。计数+1
遍历完所有元素
*/