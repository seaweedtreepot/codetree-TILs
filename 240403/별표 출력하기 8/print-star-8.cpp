#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0; cin >> n;

     for(int i = 0; i < n; i++){
        if(i%2==0){
            cout << "*";
        }
        else{
            for(int j = 0; j < i+1; j++){
                cout << "* ";
            }
        }
        cout << endl;
     }
    return 0;
}