#include<iostream>
using namespace std;
int main() {
    int L = 0;
    int N = 0;
        int arr[5001] = { 0 };
    cin >> L;
    cin >> N;
    int max = 0;
    int min = 0;
    for (int i = 0;i < N;i++) {
        int temp;
        int tempMin=0;
        cin >> temp;
        arr[i] = temp;
        if (L+1 - arr[i]>max){
            max = L+1 - arr[i];
        }
        if (arr[i]> max){
            max = arr[i];
        }
            if (arr[i] > L+1 - arr[i]) {
                tempMin = L+1 - arr[i];
            }
            else {
                tempMin = arr[i];
            }
        if (tempMin > min) {
            min = tempMin;
        }
    }
    cout << min <<" " << max;

    return 0;
}
