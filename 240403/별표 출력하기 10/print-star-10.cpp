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

    if(n%2==1){
        cnt_o--;
        int temp = cnt_o;
        cnt_o = cnt_e;
        cnt_e = temp;
    } 
   
   
    for(int i = 0; i < n; i++){
        if(i%2==0){
            for(int j = 0; j < cnt_o; j++){
                cout << "* ";
            }
            cnt_e++;
            cout << endl;
          
        }else{
            for(int j =0; j<cnt_e;j++){
                cout << "* ";
            }
            cnt_o--;
            cout << endl;
            
        }
    }
    return 0;
}