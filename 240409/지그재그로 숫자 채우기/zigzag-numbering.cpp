#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int arr[100][100];
    int cnt = 0;
    for(int i = 0; i < m; i++){
        if(i%2==0){
            for(int j=0; j < n; j++){
                arr[j][i]=cnt++;
            }
        }else{
            for(int j = n-1; j > -1; j--){
                arr[j][i]=cnt++;
            }
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