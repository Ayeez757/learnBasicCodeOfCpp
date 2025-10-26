#include<iostream>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    if (N == 1) {
        cout << 1 << "/" << 1;
        return 0;
    }
    int sum = 0;
    int diff = 0;
    int tempI = 0;
    for (int i = 1;i < N;i++) {
        sum += i;
        if (sum >= N) {
            sum -= i;
            diff = N - sum;
            tempI = i - diff + 1;
            break;
        }
    }
    cout << diff << "/" << tempI;
    return 0;
}