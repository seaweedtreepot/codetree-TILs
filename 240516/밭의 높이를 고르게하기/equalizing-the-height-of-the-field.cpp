#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;
    // 여기에 코드를 작성해주세요.
int main() {
    int N,H,T;
    int min = INT_MAX;
    int arr[100]={};
    cin >> N >> H >> T;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    for(int i = 0; i <1+ N-T; i++){//
        int sum = 0;
        for(int j = i; j < i+T; j++){
            sum += abs(arr[j]-H);
        }
        if(sum < min){
            min = sum;
        }
    }
    cout << min;
    return 0;
}