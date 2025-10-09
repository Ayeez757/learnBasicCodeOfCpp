#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
    //结果变量
    int N = 0;
    string finalName;
    int max = 0;
    long allSum = 0;

    //临时变量
    string name;
    int score1;
    int score2;
    char b1;
    char b2;
    int num;
    cin >> N;
    for (int i = 0;i < N;i++) {
        cin >> name >> score1 >> score2 >> b1 >> b2 >> num;
        int money = 0;
        if (score1 > 80 && num >= 1) {
            money += 8000;
        }
        if (score1 > 85 && score2 > 80) {
            money += 4000;
        }
        if (score1 > 90) {
            money += 2000;
        }
        if (score1 > 85 && b2 == 'Y') {
            money += 1000;
        }
        if (score2 > 80 && b1 == 'Y') {
            money += 850;
        }
        allSum += money;
        if (max < money) {
            max = money;
            finalName = name;
        }
    }
    cout << finalName << endl;
    cout << max << endl;
    cout << allSum << endl;
    return 0;
}