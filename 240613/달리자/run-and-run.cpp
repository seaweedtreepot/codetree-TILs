#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr1[100];
    int arr2[100];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        cnt += arr1[i] - arr2[i];
        arr1[i+1] += arr1[i] - arr2[i];
    }

    cout << cnt ;
    return 0;
}