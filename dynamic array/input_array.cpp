#include<iostream>
using namespace std;
int main() {
    int arr[] = {4,5,6,7,8,9,4,3,2};
    int left = 0;
    int right = sizeof(arr)/sizeof(arr[0]) - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}