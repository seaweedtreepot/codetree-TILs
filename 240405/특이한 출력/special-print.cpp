#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "(" << i+1 << ", " << j+1 << ")" << " ";
            if((i+j+2)%4==0 ){
                cout << endl;
            }
        }
    }
    return 0;
}