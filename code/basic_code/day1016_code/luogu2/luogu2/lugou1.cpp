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
	//ѭ����ȡ�ַ���Ȼ����
    while (ch != '\n') {

        //�������жϵȺ���߻����ұߵģ��ұ߾�denghao++
        if (ch == '=') {
            dengyu++;

			//���﷢�ֵȺ�������һ��������û�д�������Ҫ����һ��
            if (fuhao == '+') {
                jisuan += temp;
            }
            else {
                jisuan -= temp;
            }
            fuhao = '+';
            temp = 0;
        }
		//�����Ǵ������ֵģ��Ѷ�����ŵ��ַ�ת��Ϊ����
        if (ch >= '0' && ch <= '9') {
            temp *= 10;
            temp += ch - '0';
        }
		//�����Ǵ���δ֪����
        if (ch >= 'a' && ch <= 'z') {
			//��¼δ֪�����ַ�
            unknown = ch;

			//�����Ǵ���δ֪��ǰ���ϵ���ģ����δ֪��ǰ��û�����֣���ôϵ������1
            if (temp == 0) {
                temp = 1;
            }

			//�����Ǵ���δ֪��ǰ���ϵ���ģ�����˵3x����ô����������3xҪ����3����x�����chufa���ǳ���
            if ((fuhao == '+' && dengyu == 0) || (fuhao == '-' && dengyu == 1)) {
                chufa -= temp;
            }
            else {
                chufa += temp;
            }
            tiaoguo++;
            temp = 0;
        }

		//�����Ǵ���Ӽ��ŵ�
        if (ch == '+' || ch == '-') {
			//����δ֪���������Ǻ���δ֪������Ͳ�����
            if (tiaoguo == 0) {

				//�������ǰ��ĳ������⵽+-�žͰ�ǰ��ĳ�����ӵ������
                if ((fuhao == '+' && dengyu == 0) || (fuhao == '-' && dengyu == 1)) {
                    jisuan += temp;
                }
                else {
                    jisuan -= temp;
                }
            }


			//����������־
            else {
                tiaoguo--;
            }
            fuhao = ch;
            temp = 0;
        }
        //ѭ������
        ch = getchar();
    }

	//�������һ���������Ϊ���һ�����������û�з�����
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