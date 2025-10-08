#include<iostream>
int main() {

    double s = 0;
    double n = 0;
    int k;
    std::cin >> k;
    while (s <= k) {
        s += 1.0 / ++n;
    }
    int result = n;
    std::cout << result << std::endl;
    return 0;
}