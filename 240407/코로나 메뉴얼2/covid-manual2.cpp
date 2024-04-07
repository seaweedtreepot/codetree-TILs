#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[5]={};
    int a;
    char symton;
    for(int i = 0; i < 3; i++ ){
        cin >> symton >> a;

        if(symton=='Y' && a >=37){
            arr[1]++;
        }else if(symton=='N' && a >= 37){
            arr[2]++;
        }else if (symton=='Y'){
            arr[3]++;
        }else{
            arr[4]++;
        }
    }

    for(int i = 1; i <= 4; i++){
        cout << arr[i] <<" ";
    }
    if(arr[1]>=2){
        cout <<'E';
    }
    return 0;
}