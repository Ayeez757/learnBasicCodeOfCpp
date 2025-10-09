#include<iostream>
#define int long long
using namespace std;
signed main() {
    int n;
    cin >> n;
    int sum = 0;
    int temp = 1;
    int result = 1;
    if (n == 3 || n == 4) {
        cout << n<<endl;
        cout << n;
        return 0;
    }
    while (sum < n) {
        sum += ++temp;
    }
    if (sum == n) {
        for (int i = 2;i <= temp ;i++) {
            cout << i << " ";
            result *= i;
        }
        cout << endl;
        cout << result;
    }
    if (sum > n) {
        sum -= temp;
        int diff = n - sum;
        for (int i = 2;i < temp;i++) {
            if (i < temp - diff) {
                cout << i << " ";
                result *= i;
            }
            else {
                cout << i + 1 << " ";
                result *= (i+1);
            }
        }
        cout << endl;
        cout << result;
    }
    return 0;
}