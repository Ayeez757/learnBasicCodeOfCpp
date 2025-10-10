#include<iostream>
using namespace std;
int main() {
    //一共十三个字符
    char arr[10] = { 0 };
    int index = 0;
    int sum = 0;
    for (int i = 0;i < 12;i++) {
        char ch;
        cin >> ch;
        if (ch >= '0' && ch <= '9') {
            arr[index] = ch;
            index++;
            sum += (ch - '0' + 0) * (index);
        }
    }
    char ch;
	cin >> ch;
    if (ch == 'X'||(ch >= '0' && ch <= '9')) {
                arr[index++] = ch;
        }

    int mo = sum % 11;
    // cout << mo << endl;
    // cout << arr[9] << endl;
    // cout << arr[9] - '0' << endl;
    if (mo == (arr[9] - '0')) {
        cout << "Right";
        return 0;
    }else{
        int index = 0;
        for(int i=0;i<12;i++){
            if(i==1||i==5||i==11){
                cout<<"-";
            }else{
                cout<<arr[index++];
            }
        }
        cout << mo;
    }



    return 0;
}