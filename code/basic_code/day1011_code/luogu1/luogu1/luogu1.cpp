#include<iostream>
using namespace std;

struct sct {
    int yw;
    int sx;
    int yy;
    int id;
    int sum;
}arr[305];

bool structSort(sct x, sct y) {
    if (x.sum != y.sum) {
        return x.sum > y.sum;
    }
    else {
        if (x.yw != y.yw) {
            return x.yw > y.yw;
        }
        else {
            return x.id < y.id;
        }
    }
}

int main() {
    int n = 0;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> arr[i].yw >> arr[i].sx >> arr[i].yy;
        arr[i].sum = arr[i].yw + arr[i].sx + arr[i].yy;
        arr[i].id = i + 1;
    }
    for (int i = n;i > 0;i--) {
        for (int j = 0;j < i;j++) {
            if (structSort(arr[j], arr[j + 1])) {
                sct temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int index = n;
    for (int i = 0;i < 5;i++) {
        cout << arr[index].id << " " << arr[index].sum << endl;
        index--;
    }
    return 0;
}