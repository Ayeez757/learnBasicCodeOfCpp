#include<iostream>
#include<algorithm>
#include<cstdio>
#include<math.h>
using namespace std;

bool is_prime(int num)
{
    if (num <= 1) return false;
    for (int i = 2;i <= sqrt(num);i++)
    {
        if (num % i == 0)
            return false;
    }return true;
}
int main() {
    char ch = getchar();
    char az[26] = { 0 };
    while (ch != '\n') {
        // az[ch-'a'].letter=ch;
        int temp = ch - 'a';
        az[temp]++;
        ch = getchar();
        if (ch == '\n') {
            break;
        }
    }
    sort(az, az + 26, greater<int>());
    int maxn = az[0];
    int minn = 0;
    int index = 0;
    while (az[++index] != 0) {
        minn = az[index];
    }
    int result = maxn - minn;
    if (is_prime(result)) {
        cout << "Lucky World" << endl << result;
    }
    else {
        cout << "No Answer" << endl << 0;
    }

    return 0;
}