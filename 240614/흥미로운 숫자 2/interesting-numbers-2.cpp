#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int x,y;
    int inter = 0;
    cin >> x >> y;
    for(int i = x; i <=y; i++){
       for(int j = 0; j < 10; j++){
            int t = i;
            int cnt = 0;
            while(t!=0){
                if(t%10 != j){
                    cnt++;
                }
                t/=10;
            }
            if(cnt == 1){
                inter++;
                break;
            }
        }
    }


    cout << inter;
    return 0;
}