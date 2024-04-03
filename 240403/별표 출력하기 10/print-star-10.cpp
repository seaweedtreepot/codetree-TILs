#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin>> n;
    int cnt_o=1, cnt_e=n;
    for(int i = 0; i < n; i++){
        if(i%2==0){
            for(int j = 0; j < cnt_o; j++){
                cout << "* ";
            }
            cnt_o++;
            cout << endl;
        }else{
            for(int j = 0; j <cnt_e;j++){
                cout << "* ";
            }
            cnt_e--;
            cout << endl;
        }
    }
    
    
    
    for(int i = 0; i < n; i++){
        if(i%2==1){
            for(int j = 0; j < cnt_e; j++){
                cout << "* ";
            }
            cout << endl;
            cnt_e--;
        }else{
            for(int j =0; j<cnt_o;j++){
                cout << "* ";
            }
            cout << endl;
            cnt_o++;
        }
    }
    return 0;
}