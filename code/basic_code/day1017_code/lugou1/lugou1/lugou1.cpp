#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int N = 0;
    int arr[100005] = { 0 };
    cin >> N;
    for (int i = 0;i < N;i++) {
        cin >> arr[i];
    }
        if (N % 2 == 0) {
            for (int i = 0;i <= (N - 1) / 2;i++) {
                sort(arr, arr + 2*i);
                cout << arr[i]<<" ";
            }
        }
        else {
            
            for (int i = 0;i <= N / 2;i++) {

                sort(arr, arr + 2*i);
                cout << arr[i]<<" ";
            }
        }


    return 0;
}