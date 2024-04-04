#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i%2==0){
                cout << i*n + (++cnt)<< " ";
            }else{
                cout << i*n + (cnt--) <<" ";
            }
        }
        cout << endl;
    }
    return 0;
}