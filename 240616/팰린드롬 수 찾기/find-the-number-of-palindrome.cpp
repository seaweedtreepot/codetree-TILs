#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int x,y;
    cin >> x >> y;

    int cnt = 0;

    for(int i = x; i <=y; i++){
        bool flag = true;
        int ja = 0;
        int temp = i;
        int arr[7];
        while(temp!=0){
            arr[ja] = temp%10;
            temp /=10;
            ja++;
        }
        for(int j = 0; j < ja; j++){
            //cout << arr[j] << " ";
        }
        //cout << endl;
        for(int j = 0; j < ja/2; j++){
            if(arr[j]!=arr[ja-j-1]){
                flag = false;
                break;
            }

        }
        if(flag){
            //cout << i << endl;
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}