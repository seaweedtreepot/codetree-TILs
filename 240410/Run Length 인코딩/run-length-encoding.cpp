#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;
    int cnt =1;
    string B="";
    for(int i = 0; i < A.length(); i++){
        if(A[i]==A[i+1]){
            cnt++;
        }else{
            B += A[i];
           if(cnt>9){
            while(cnt!=0){
                B+=cnt;
                cnt/=10;
                //cout << B.length() << endl;
            }
           }
           else{
                B+=cnt;
            }
            cnt=1;

        }
    }
    cout << B.length() << endl;
    for(int i = 0; i < A.length(); i++){
        if(A[i]==A[i+1]){
            cnt++;
        }else{
            cout << A[i];
            cout << cnt;
            cnt=1;

        }
    }
    return 0;
}