#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    int max = 0;
    int ans = 0;
    cin >> a >> b >> c;
    int i = 0;
    while(i*a < c){
        //cout << "working" << endl;
        max = i*a;
        while(max<c){
            max += b;
        }
        max -= b;
        if(ans < max){
            ans = max;
        }
        i++;
    }

    cout << ans;
   
    return 0;
}