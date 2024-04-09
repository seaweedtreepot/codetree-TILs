#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int arr[100][100] = {};
    int cnt = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = cnt++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}