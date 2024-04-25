#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int x1,y1;
    bool arr[201][201]= {};
    for(int i = 0; i < n; i++){
        cin >> x1 >> y1;
        for(int j = x1; j < 8+x1; j++ ){
            for(int k = y1; k < 8+y1; k++ ){
                arr[j+100][k+100] = true;
            }   
        }
    }

    int cnt =0;
    for(int i = 0; i < 201; i++){
        for(int j = 0; j < 201; j++){
            if(arr[j][i]==true){
                cnt++;
            }
        }
    }

    cout <<cnt;
    return 0;
}