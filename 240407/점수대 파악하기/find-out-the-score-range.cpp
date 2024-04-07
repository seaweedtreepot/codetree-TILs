#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int arr[11]={};


    for(int i = 0; i < 100; i++){
        cin >> a;
        arr[a/10]++;
    }

    for(int i = 10; i >0;i-- ){
        cout << i * 10 << " - " << arr[i]<<endl;;
    }
    return 0;
}