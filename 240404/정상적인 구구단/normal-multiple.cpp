#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << (i+1) << " * " << (j+1)<< " = " << (i+1)*(j+1);
            if(j!=n-1){
                cout << ", ";
            }
        }
        cout <<"\n";
    }
    return 0;
}