#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string str;

    cin >> n >> str;

    for(int i = 1; i < n; i++){
        bool flag = false;
        int ans = i;
        for(int q = 0; q < n-i+1;q++){
            string duple = str.substr(q,i);
            //cout << duple << endl;
            int cnt = 0;
            for(int k = 0; k < n-i+1;k++){
                if(duple == str.substr(k,i)){
                    //cout << duple << " " ;
                    cnt++;
                }
                if(cnt > 1){
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }else{
                ans = duple.length();
            }
        }
        if(!flag){
            cout << ans << endl;
            return 0;
        }
        
    }
    return 0;
}