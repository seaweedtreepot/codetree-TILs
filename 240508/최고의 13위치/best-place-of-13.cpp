#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,arr[20][20];
    cin >> n;
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int max = INT_MIN;
    for(int i =0; i < n; i++){
        for(int j = 0; j < n-2; j++){
            int cur = arr[i][j]+arr[i][j+1]+arr[i][j+2];
            if(cur > max){
                max = cur;
            }
        }
    }
    
    cout << max;
    return 0;
}