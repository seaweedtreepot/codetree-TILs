#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n =0 ; cin >> n;

    for(int i = 0; i < n;i++){
        if(i<n){
            for(int j = 0; j < n-i; j++){
                cout << "* ";
            }
        }
        cout << "\n";
    }

    for(int i = 1 ; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}