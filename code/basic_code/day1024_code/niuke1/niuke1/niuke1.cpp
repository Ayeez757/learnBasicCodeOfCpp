#include<iostream>
using namespace std;
int arr1[200005] = { 0 };//原双排列数组
int arr2[100005] = { -1 };//记录第几次出现
int main() {
    int n = 0, max = 0, min = 100005, maxIndex = 0, minIndex = 0, result = 0;

    cin >> n;
    for (int i = 0;i < 2 * n;i++) {
        cin >> arr1[i];
        if (arr2[arr1[i]] == -1) {
            //说明第一次出现
            arr2[arr1[i]] = i;
            if (arr1[i] > max) {
                max = arr1[i];
                maxIndex = i;
            }
        }
        else {
            //说明第二次出现
            result += (i - arr2[arr1[i]]-1);
            if (arr1[i] < min) {
                min = arr1[i];
                minIndex = i;
            }
        }
    }
    int result1;

        //int temp= arr1[maxIndex];
        //arr1[maxIndex]=arr1[minIndex];
        //arr1[minIndex]=arr1[maxIndex];
     result1= 2 * (maxIndex - minIndex - 1)+result;
     if (result > result1) {
         cout << result;
     }
     else {
         cout << result1;
     }




    return 0;
}