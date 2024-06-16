#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    int arr[100];
    for(int i = 0; i < n; i++){
        cin >> arr[i];

    }
    int cnt = 0;
    for(int i = 0; i < n;){
        if(arr[i]==1){
            cnt++;
            //cout << i+m << endl;
            i+=m*2+1;
            
        }else{
            i++;
        }
    }

    cout << cnt;
    return 0;
}