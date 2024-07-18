#include <iostream>
using namespace std;
void fun(int arr[], int n){
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    fun(arr,n);
    return 0;
}