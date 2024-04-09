#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr_1[3][3] = {}, arr_2[3][3]={};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr_1[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr_2[i][j];
        }
    }

     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr_1[i][j] * arr_2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}