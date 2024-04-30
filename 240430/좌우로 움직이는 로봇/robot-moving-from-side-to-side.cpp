#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    int t;
    char d;
    int a_cnt = 0;
    int b_cnt = 0;
    cin >> n >> m;
    int d_cnt = 0;
    int a_arr[2000001],b_arr[2000001];
    for(int i = 0; i < n; i++){
        cin >> t >> d;
        if(d=='L'){
            for(int j = 0; j < t; j++){
                d_cnt--;
                a_arr[++a_cnt]=d_cnt;
            }
        }else{
            for(int j = 0; j < t; j++){
                d_cnt++;
                a_arr[++a_cnt]=d_cnt;
            }
        }
    }
    d_cnt = 0;
    for(int i = 0; i < m; i++){
        cin >> t >> d;
        if(d=='L'){
            for(int j = 0; j < t; j++){
                d_cnt--;
                b_arr[++b_cnt]=d_cnt;
            }
        }else{
            for(int j = 0; j < t; j++){
                d_cnt++;
                b_arr[++b_cnt]=d_cnt;
            }
        }
    }
    int ans_cnt =0;
    int asv = (a_cnt>b_cnt?a_cnt:b_cnt);
    if(a_cnt < b_cnt){
        for(int i = a_cnt+1;i <= b_cnt; i++){
            a_arr[i]=a_arr[a_cnt];
        }
    }else{
        for(int i = b_cnt+1;i <= a_cnt; i++){
            b_arr[i]=b_arr[b_cnt];
        }
    }
    for(int i = 1; i <= asv; i++){
        if(a_arr[i]==b_arr[i]){
            if(a_arr[i-1]!=b_arr[i-1]){
                ans_cnt++;
                //cout << i << endl;
            }
        }
    }

    for(int i = 0 ; i <= asv; i++){
        //cout << i << ";  " << "A: " << a_arr[i] << " " << "B: " << b_arr[i] << endl; 
    }
    cout << ans_cnt;
    return 0;
}