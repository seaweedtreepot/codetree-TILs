#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    int cnt = 1;
    int arr[100][100];
    int i = 0, j = 0;

    while(1){
        while(1){
            arr[i][j] = cnt++;
            i++; j--;
            if(i == n || j < 0){
                
               // cout << endl;
                break;
            }
        }

        j = j+i+1;
        i=0;
        if(j>=m){
            i=j-(m-1);
            j=m-1;
        }

        if(cnt > n*m ){
            break;
        }
    }
    for(int i =0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
    }
        cout << endl;
    }
    return 0;
}