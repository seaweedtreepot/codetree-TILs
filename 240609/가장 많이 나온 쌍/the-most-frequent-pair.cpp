#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    pair<int,int> ssang[100];
    int m;
    int max = 0;
    cin >> n >> m;
    int i1,i2;
    for(int i = 0;i < m; i++){
        cin >> i1 >> i2;
        if(i1>i2){
            ssang[i]=make_pair(i2,i1);
        } else{
            ssang[i] = make_pair(i1,i2);
        }
    }
    sort(ssang,ssang+m);
    int cnt = 1;
    for(int i = 0; i < m-1; i++){
        if(ssang[i]==ssang[i+1]){
            cnt++;
            if(cnt > max){
                max = cnt;
            }
        }else{
            cnt = 1;
        }

    }

    cout << max;
    return 0;
}