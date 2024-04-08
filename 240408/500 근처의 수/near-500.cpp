#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    for(int i = 0; i < 10; i++)
        cin >> arr[i];

    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0; i < 10; i++){
        if(arr[i]<500){
            if(max<arr[i]){
                max = arr[i];
            }
        }else{
            if(min > arr[i]){
                min = arr[i];
            }
        }
    }

    cout << max << " " << min;
    return 0;
}