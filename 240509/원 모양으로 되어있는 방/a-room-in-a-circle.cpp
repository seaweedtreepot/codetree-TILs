#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.

    int n; int min=INT_MAX;
    int arr[1003];
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){//i번째 방에서 시작할때
        int cnt = 0;
        for(int j = 0; j < n; j++){//i부터 n번째방
            //(i+j)%n == 현재 있는 방 번호 :j==이동한 거리 수
            cnt += arr[(i+j)%n]*j;
            //cout << cnt << endl;
        }
        if(min > cnt){
            min = cnt;
        }
    }
    cout << min;

    return 0;
}