#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int room_clean_cnt=0,corridor_clean_cnt=0,restroom_clean_cnt=0;
    for(int i = 1; i <=n; i++){
        if(i%12==0){
            restroom_clean_cnt++;
        }
        else if (i%6==0){
            corridor_clean_cnt++;
        }
        else if(i%3==0){
            corridor_clean_cnt++;
        }
        else if (i%2==0){
            room_clean_cnt++;
        }
    }
    cout <<room_clean_cnt << " " << corridor_clean_cnt << " " << restroom_clean_cnt;
    return 0;
}