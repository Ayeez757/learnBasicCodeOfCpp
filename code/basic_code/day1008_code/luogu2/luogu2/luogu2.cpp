#include<iostream>
int main() {
    int n;
    std::cin >> n;
    int arr[10001];
    for (int i = 0;i < n;i++) {
        std::cin >> arr[i];
    }
    //С��������
    for (int i = 0;i < n;i++) {
        for (int j = i;j < n;j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    //some������ʱ�ϳɵ��Ƕ�
    int some = arr[0] + arr[1];
    //���
    int result = some;
    for (int i = 1;i < n;i++) {
        if (arr[i + 1] < some) {
            arr[i + 1] += arr[i];
            result += (arr[i] + arr[i + 1]);
            //������ôд�и����⣬���ĳһ��ͻȻ�ܴ��֮ǰȫ�����������࣬�Ͳ���
            //�Ҳ�����������ôд��wa��˵
        }
        else {
            some += arr[i];
            result += (arr[i] + some);
        }
    }
    //���
    std::cout << result << std::endl;
    return 0;
}