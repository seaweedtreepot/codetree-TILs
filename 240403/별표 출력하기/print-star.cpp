#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n=0;
    cin >> n;

    for(int i = 0; i < 2*n-1; i++ ){
        if(i<n){
            for(int j = 0; j <= i; j++){
                cout << "* ";
            }
        }else{
            for(int j = 0;j<2*n-1-i;j++){
                cout << "* ";
            }
        }
        cout << "\n";
    }
    return 0;
}