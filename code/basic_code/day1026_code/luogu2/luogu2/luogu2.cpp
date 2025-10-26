#include<iostream>
using namespace std;
int n = 0;
int arr[1005];
int arr2[3] = { 0 };
int main() {
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
        arr2[arr[i]-1]++;
    }
    int count1 = 0;
    int count2 = 0;
    for (int i = 0;i < arr2[0];i++) {
        if (arr[i] !=1) {
            count1++;
        }

    }
    for (int i = arr2[0];i < arr2[1] + arr2[0];i++) {
        if (arr[i] == 3) {
            count2++;
        }
    }
    cout << count1 + count2;
    return 0;
}