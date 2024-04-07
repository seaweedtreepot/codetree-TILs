#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char a;
    int b;
    cin >> a;
    bool flag = false;
    for(int i = 0; i < 6;i++){
        if(arr[i] == a){
            b = i;
            flag = true;
            break;
        }
    }

    if(flag){
        cout << b << "\n";
    }else{
        cout << "None" ; 
    }

    return 0;
}