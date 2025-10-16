#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int main() {
    double x = 0;
    double jisuan = 0;
    double temp = 0;
    char fuhao = '+';
    char ch = getchar();
    int dengyu = 0;
    double chufa = 0;
    int tiaoguo = 0;
    char unknown;
	//循环读取字符，然后处理
    while (ch != '\n') {

        //这里是判断等号左边还是右边的，右边就denghao++
        if (ch == '=') {
            dengyu++;

			//这里发现等号左边最后一个常数项没有处理，所以要处理一下
            if (fuhao == '+') {
                jisuan += temp;
            }
            else {
                jisuan -= temp;
            }
            fuhao = '+';
            temp = 0;
        }
		//这里是处理数字的，把多个连着的字符转化为整数
        if (ch >= '0' && ch <= '9') {
            temp *= 10;
            temp += ch - '0';
        }
		//这里是处理未知数的
        if (ch >= 'a' && ch <= 'z') {
			//记录未知数的字符
            unknown = ch;

			//这里是处理未知数前面的系数的，如果未知数前面没有数字，那么系数就是1
            if (temp == 0) {
                temp = 1;
            }

			//这里是处理未知数前面的系数的，比如说3x，那么最后算出来的3x要除与3才是x，这个chufa就是除数
            if ((fuhao == '+' && dengyu == 0) || (fuhao == '-' && dengyu == 1)) {
                chufa -= temp;
            }
            else {
                chufa += temp;
            }
            tiaoguo++;
            temp = 0;
        }

		//这里是处理加减号的
        if (ch == '+' || ch == '-') {
			//跳过未知数的项，如果是含有未知数的项就不处理
            if (tiaoguo == 0) {

				//处理符号前面的常数项，检测到+-号就把前面的常数项加到结果里
                if ((fuhao == '+' && dengyu == 0) || (fuhao == '-' && dengyu == 1)) {
                    jisuan += temp;
                }
                else {
                    jisuan -= temp;
                }
            }


			//重置跳过标志
            else {
                tiaoguo--;
            }
            fuhao = ch;
            temp = 0;
        }
        //循环读数
        ch = getchar();
    }

	//处理最后一个常数项，因为最后一个常数项后面没有符号了
    if (temp != 0) {
        if ((fuhao == '+' && dengyu == 0) || (fuhao == '-' && dengyu == 1)) {
            jisuan += temp;
        }
        else {
            jisuan -= temp;
        }
    }

    if (chufa != 0) {
        x = jisuan / chufa;
    }
    cout << unknown << "=";
    std::cout << fixed << setprecision(3) << x;
    return 0;
}