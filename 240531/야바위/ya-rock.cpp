#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,a,b,c,score = 0,cnt=0,max=0;
    cin >> n;

    for(int i = 1; i < 4; i++){//i번컵일대 최대점수
        bool arr[4]= {};
        arr[i]= true;
        score =0;
        for(int j = 0; j < n; j++){
            cin >> a >> b >> c;
            bool pram = arr[a];
            arr[a] = arr[b];
            arr[b] = pram;

            if(arr[c]==true){
                score++;
            }
        }
        if(score > max){
            max = score;
        }
    }

    cout << max;
    return 0;
}