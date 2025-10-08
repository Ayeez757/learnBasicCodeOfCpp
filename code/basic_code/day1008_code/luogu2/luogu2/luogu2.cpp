#include<iostream>
int main() {
    int n;
    std::cin >> n;
    int arr[10001];
    for (int i = 0;i < n;i++) {
        std::cin >> arr[i];
    }
    //小到大排序
    for (int i = 0;i < n;i++) {
        for (int j = i;j < n;j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    //some代表暂时合成的那堆
    int some = arr[0] + arr[1];
    //结果
    int result = some;
    for (int i = 1;i < n;i++) {
        if (arr[i + 1] < some) {
            arr[i + 1] += arr[i];
            result += (arr[i] + arr[i + 1]);
            //这里这么写有个问题，如果某一堆突然很大比之前全部加起来都多，就不行
            //我不到啊，先这么写，wa再说
        }
        else {
            some += arr[i];
            result += (arr[i] + some);
        }
    }
    //输出
    std::cout << result << std::endl;
    return 0;
}