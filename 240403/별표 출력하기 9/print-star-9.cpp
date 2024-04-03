#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n =0; cin>> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (2*(n-1-i))){
            cout << " ";
        }
        for(int j = 0; j < 2*i+1){
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}