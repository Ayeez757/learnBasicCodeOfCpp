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
        //��¼���ڵȺ���߻����ұ�
        if (ch == '=') {
            dengyu++;
            if ((fuhao == '+' && dengyu == 0) || (fuhao == '-' && dengyu == 1)) {
                jisuan += temp;
            }
        }
		//ͳ��һ�����ڵ�����
        if (ch >= '0'&& ch <= '9') {
            temp *= 10;
            temp += ch-0;
        }
		//����������������Ⱥ��ұߣ����ŷ�������
        if (ch >= 'a' && ch <= 'z') {
            if ((fuhao == '+' && dengyu == 0) || (fuhao == '-' && dengyu == 1)) {
                chufa -= temp;
            }
            else {
                chufa += temp;
            }
        }
		//������ţ����ѳ�����ȫ���������
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