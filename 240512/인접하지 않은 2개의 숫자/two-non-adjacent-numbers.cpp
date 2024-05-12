#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i+2; j < n; j++){
            if(arr[i]+arr[j]> max){
                max = arr[i]+arr[j];
            }
        }
    }

    cout << max;
    return 0;
}