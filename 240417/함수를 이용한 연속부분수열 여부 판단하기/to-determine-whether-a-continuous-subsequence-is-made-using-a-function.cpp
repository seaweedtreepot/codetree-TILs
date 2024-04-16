#include <iostream>
using namespace std;


bool IsPartOf(int* a,int a_length, int* b,int b_length){
    bool flag = false;
    for(int i = 0; i < a_length; i++){
        if(a[i]==b[0]){
            flag = true;
            for(int j = 0; j < b_length;j++){
                if(a[i+j]!=b[j]){
                    flag = false;
                    break;
                }
            }
        }
    }
    return flag;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int arr_1[100],arr_2[100];
    int n1,n2;
    cin >> n1 >> n2;

    for(int i = 0; i < n1; i++){
        cin >> arr_1[i];
    }
    for(int i = 0 ; i < n2; i++){
        cin >> arr_2[i];
    }

    cout << (IsPartOf(arr_1,n1,arr_2,n2)?"Yes":"No");
    return 0;
}