#include<iostream>
#include<queue>
#include<vector>
int main() {
    int n;
    std::cin >> n;
    std::priority_queue<int,vector<int>,greater<int>> que;
    for (int i = 0;i < n;i++) {
        int temp=0;
        std::cin >> temp;
        que.push(temp);
    }
    //some代表暂时合成的那堆
    int some=0;
    //结果
    int result = 0;
    while (que.size()>1) {
        int first = que.top();
        que.pop();
        int second = que.top();
        que.pop();
        some = first + second;
        result += some;
        que.push(some);
    }
    //输出
    std::cout << result << std::endl;
    return 0;
}