#include<bits/stdc++.h>
using namespace std;
int main() {
    double s = 0, a = 0, b = 0;
    cin >> s >> a >> b;
    double result = s * (a + 3 * b) / (b * (3 * a + b));
    cout << fixed << setprecision(6) << result << endl;
    return 0;
}