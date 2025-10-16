#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double x = 0;
    double jisuan = 0;
    double temp = 0;
    char fuhao = '+';
    char ch = getchar();
    int dengyu = 0;
    double chufa = 0;
    while (ch != '\n') {
        //记录是在等号左边还是右边
        if (ch == '=') {
            dengyu++;
            if ((fuhao == '+' && dengyu == 0) || (fuhao == '-' && dengyu == 1)) {
                jisuan += temp;
            }
        }
		//统计一个项内的数字
        if (ch >= '0'&& ch <= '9') {
            temp *= 10;
            temp += ch-0;
        }
		//处理变量，把他丢等号右边（符号反过来）
        if (ch >= 'a' && ch <= 'z') {
            if ((fuhao == '+' && dengyu == 0) || (fuhao == '-' && dengyu == 1)) {
                chufa -= temp;
            }
            else {
                chufa += temp;
            }
        }
		//处理符号，并把常数项全部计算出来
        if (ch == '+' || ch == '-') {
            if ((fuhao == '+' && dengyu == 0) || (fuhao == '-' && dengyu == 1)) {
                jisuan += temp;
            }
            else {
                jisuan -= temp;
            }
            fuhao = ch;
            temp = 0;
        }
        ch = getchar();
    }
    if ((fuhao == '+' && dengyu == 0) || (fuhao == '-' && dengyu == 1)) {
        jisuan += temp;
    }
    else {
        jisuan -= temp;
    }
    if (chufa != 0) {
        x = jisuan / chufa;
    }
    std::cout << fixed << setprecision(3) << x;
    return 0;
}