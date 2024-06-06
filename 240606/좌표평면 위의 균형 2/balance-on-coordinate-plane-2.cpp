#include <iostream>
#include <utility>
using namespace std;

int dotCount(int d,int a,int b, pair<int,int> dts[],int n){
    int cnt = 0;
    if(d==0){
        for(int i = 0; i < n;i++){
            if(dts[i].first > a && dts[i].second > b){
                cnt ++;
            }
        }
    }else if(d==1){
        for(int i = 0; i < n;i++){
            if(dts[i].first > a && dts[i].second < b){
                cnt ++;
            }
        }
    }else if(d==2){
        for(int i = 0; i < n;i++){
            if(dts[i].first < a && dts[i].second > b){
                cnt ++;
            }
        }
    }else{
        for(int i = 0; i < n;i++){
            if(dts[i].first < a && dts[i].second < b){
                cnt ++;
            }
        }
    }
    return cnt;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,i1,i2; 
    int m = 0;
    int min=1000;
    pair<int,int> dots[100];


    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> i1 >> i2;
        dots[i] = make_pair(i1,i2);
    }


    for(int i = 1; i <=100; i++){//세로
        for(int j = 1; j <= 100; j++){//가로
            if(i%2==1 || j%2==1) continue;
            m = 0;
            int a = 0;
            for(int k = 0; k < 4; k++){
                a = dotCount(k,i,j,dots,n);
                if(a > m){
                    m = a;
                }
            }
            if(m < min){
               // cout << i << j << endl;
               //cout << m << endl;
                min = m;
            }
        }
        
    }

    cout << min ;
    return 0;
}