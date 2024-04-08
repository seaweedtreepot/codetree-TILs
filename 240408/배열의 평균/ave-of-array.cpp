#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(1);

    int arr[2][4];
    for(int i =0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
        cout << (double)sum/4 << " ";
        sum = 0;
    }
    cout << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            sum += arr[j][i];
        }
        cout << (double)sum/2<<" ";
        sum = 0;
    }
    cout << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            sum += arr[j][i];
        }
    }
    cout << (double)sum/8;
    return 0;
}