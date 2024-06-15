#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    int max = 0;
    for(int i = 0; i< n; i++){
        cin >> arr[i];
        if(arr[i]> max){
            max = arr[i];
        }
    }
    int cnt_mass=0;
    for(int i = 0; i <=max; i++){
        int cnt = 0;
        bool flag = false;
        for(int j = 0; j < n; j++){
            if(arr[j]>i){
                if(!flag){
                    flag = true;
                    cnt++;
                }
            }else {
                flag =false;
            }
        }
        //cout << endl;
        if(cnt_mass < cnt){
            cnt_mass = cnt;
        }
    }

    cout << cnt_mass << endl;
    return 0;
}