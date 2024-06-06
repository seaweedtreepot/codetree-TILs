#include <iostream>
#include <utility>
#include <tuple>
using namespace std;

int dotCount(int a, int b,pair<int,int> dts[],int n){
    int cnt = 0;
    if(a){//세로
        for(int i = 0; i < n;i++){
            if(dts[i].second == b){
                cnt++;
            }
        }
    }else{
        for(int i = 0; i < n; i++){
            if(dts[i].first == b){
                cnt++;
            }
        }
    }
    //cout << cnt ; 
    return cnt;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int i1,i2;
    cin >> n;
    pair<int,int> dots[20];
    tuple<int,int,int> s[8];

    for(int i = 0; i <=1; i++){
        for(int j = 0; j <=1; j++){
            for(int k = 0; k <=1; k++){
                s[i+j+k] = make_tuple(i,j,k);//0이 가로 1이 세로
            }
        }
    }
    for(int i = 0;i < n; i++){
        cin >> i1 >> i2;
        dots[i] = make_pair(i1,i2);
    }

    for(int i = 0; i < 8; i++){
        int a = get<0>(s[i]);
        int b = get<1>(s[i]);
        int c = get<2>(s[i]);
        int max = 0;
        for(int j = 0; j < n;j++){
            for(int k = 0; k < n; k++){
                for(int q = 0; q < n; q++){
                    int cnt = 0;
                    cnt += dotCount(j,a,dots,n);
                    cnt += dotCount(k,b,dots,n);
                    cnt += dotCount(q,c,dots,n);
                    if(cnt > max){
                        max = cnt;
                    }
                }
            }
        }
       // cout << max << endl;
        if(max == n){
            cout << 1 ;
            return 0;
        }
    }
    cout << 0;
    return 0;
}