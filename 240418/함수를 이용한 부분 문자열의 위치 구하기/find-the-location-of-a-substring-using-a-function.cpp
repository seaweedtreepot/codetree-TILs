#include <iostream>
#include <string>
using namespace std;

string a,b;
int IsPartial(){
    int flag = -1;
    for(int i = 0; i < a.length(); i++){
        if(a[i]==b[0]){
            flag = i; //cout << i << endl;
            for(int j = 0; j < b.length(); j++){
                if(a[i+j]!=b[j]){
                  flag = -1;
                  break;
                }
            }
        }
        if(flag != -1){
            break;
        }
    }
    return flag;
}
int main() {
    // 여기에 코드를 작성해주세요.
   cin >> a >> b;

    cout << IsPartial();
    return 0;
}