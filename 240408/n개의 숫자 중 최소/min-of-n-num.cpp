#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int min_val = INT_MAX;

    int n=0;
    cin >> n;
    int a;
    int cnt = 0;
    for(int i = 0; i < n ; i++){
        cin >> a;
        if(a < min_val){
            min_val = a;
            cnt = 1;
        }else if( a == min_val){
            cnt++;
        }
    }


    cout << min_val << " " << cnt ;
    return 0;
}