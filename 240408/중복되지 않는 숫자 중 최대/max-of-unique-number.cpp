#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, a;
    cin >> n;
    int arr[1001];
    for(int i = 0; i < 1001; i++){
        arr[i] = -1;
    }
    for(int i = 0; i < n; i++){
        cin >> a;
        if(arr[a]==-1){
            arr[a] = 1;
            //cout << "초기화 완료" << endl;
        }else{
            arr[a]++;
        }
    }

    int max = -1;
    for(int i = 1000; i > 0; i--){
        if(arr[i]==1){
            if(i > max){
                max = i;
            }
        }
    }

    
    cout << max;
    
    return 0;
}