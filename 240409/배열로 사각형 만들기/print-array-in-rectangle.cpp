#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[5][5];
    int n = 5;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i==0 || j == 0){
                arr[i][j] = 1;
            }else{
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0;j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}