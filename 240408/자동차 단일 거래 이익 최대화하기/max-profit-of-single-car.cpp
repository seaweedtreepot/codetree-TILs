#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n; //자동차 가격이 가장 작을때와 클때의 차
    cin >> n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin >> arr [i];
    }

    //int min = INT_MAX;
    int max = 0;
  
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(max < arr[j]-arr[i]){
                max = arr[j] - arr[i];
            }
        }
    }

    cout << max;
    return 0;
}