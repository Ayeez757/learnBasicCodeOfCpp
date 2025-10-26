#include<iostream>
using namespace std;
int main() {
    int a = 0, b = 0, index = 0;
    cin >> a >> b;
    int tenNum = a + b;
    char result[100] = { 0 };
    while (tenNum > 0) {
        int sixNum = tenNum % 16;
        if (sixNum < 10) {
            result[index++] = sixNum+'0';
        }
        else {
            result[index++] = sixNum - 10 + 'a';
        }
        tenNum /= 16;
    }
    for (int i = index-1;i >= 0;i--) {
        cout << result[i];
    }
    return 0;
}
