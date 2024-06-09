#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    pair<int,int> cond[10];
    int n;
    int i1, i2;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> i1 >> i2;
        cond[i] = make_pair(i1,i2);
    }

    int start  = cond[0].first;
    int last = cond[0].second;
    for(int i = start; i <= last; i++){
        int x = i*2;
        for(int j = 0; j < n; j++){
            if(x>=cond[j].first && x<= cond[j].second){
                if(j==n-1){
                    cout << i ;
                    return 0;
                }
                x *= 2;
            }else{
                continue;
            }
        }
    }

    return 0;
}