#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    int arr_n1[100]={};
    int arr_n2[100]={};
    for(int i = 0; i < n1; i ++){
        cin >> arr_n1 [i];
    }
    for(int i = 0; i < n2; i++){
        cin >> arr_n2 [i];
    }


    bool flag = false;
    for(int i = 0; i < n1; i++){
        if(flag){
            break;
        }
        if(arr_n1[i]==arr_n2[0]){
            for(int j = 0;j < n2; j++){
               // cout << arr_n1[j+i] << " - " << arr_n2[j]<<endl;
                if(arr_n1[j+i]!=arr_n2[j]){
                    //cout << "내부 false 실행"<<endl;
                    flag = false;
                    break;
                }
                flag = true;
            }
        }
    }

    cout << (flag?"Yes":"No") ;
    return 0;
}