#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a_arr[2000]={};
    int b_arr[2000]={};
    int n, m,cnt=1,locate = 0;   
    cin >> n >> m;
    int cur;
    char dir,prev;
    for(int i = 0; i < n; i++){
        cin >> dir >> cur;
        
        for(int j =0; j < cur; j++){
            if(dir=='R'){
                a_arr[cnt++]=++locate;
            }else{
                a_arr[cnt++]=--locate;
            }
        }
    }

    for(int i = 0; i < cnt; i++){
        //cout << a_arr[i] << endl;
    }
    cnt = 1;
    locate = 0;
    for(int i = 0; i < m; i++){
        cin >> dir >> cur;
        for(int j =0; j < cur; j++){
            if(dir=='R'){
                b_arr[cnt++]=++locate;
            }else{
                b_arr[cnt++]=--locate;
            }
        }
    }
    for(int i = 0; i < cnt; i++){
        //cout << b_arr[i] << endl;
    }
    for(int i = 1; i < cnt; i++){
        //cout << i <<" : " << a_arr[i] << " " << b_arr[i] << endl;
        if(a_arr[i]==b_arr[i]){
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}