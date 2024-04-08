#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n ,q;
    cin >> n >> q;

    int arr[100]={};

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cur =0;
    int cur2 =0;
    for(int i = 0; i < q; i++){
        cin >> cur;
        if(cur==1){
            cin >> cur;
            cout << arr[cur-1]<< " ";
        }else if(cur==2){
            cin >> cur;
            bool flag = true;
            for(int j = 0; j < n; j++){
                if(arr[j]==cur){
                    cout << j + 1 << " ";
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout << 0 << " ";
            }
        }else if(cur==3){
            cin >> cur;
            cin >> cur2;
            for(int j=cur-1; j < cur2; j++){
                cout << arr[j] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}