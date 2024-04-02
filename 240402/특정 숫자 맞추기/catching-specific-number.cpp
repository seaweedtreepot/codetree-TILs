#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    while(1){
        cin >> n;
        if(n<25){
            cout << "Higer" << endl;
        }else if(n>25){
            cout << "Lower" << endl;
        }
        else{
            cout << "Good";
            break;
        }
    }
    return 0;
}