#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[1000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){//시작지점 설정
        int sum =0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            
            for(int k = i; k < j+1; k++){
                if((double(sum)/(j+1-i))==arr[k]){
                    //cout << i << " " <<j <<" " << sum<<endl;
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}