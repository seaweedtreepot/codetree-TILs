#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    int v,t;
    int a_arr[1000000]={}, b_arr[1000000]={};

    cin >> n  >> m;
    int a_cnt = 1, b_cnt = 1;
    for(int i = 0; i < n; i++){
        cin >> v >> t;
        for(int j=0; j < t; j++){
            a_arr[a_cnt++] = v;
        }
    }
    for(int i = 0; i < m; i++){
        cin >> v >> t;
        for(int j=0; j < t; j++){
            b_arr[b_cnt++] = v;
        }
    }

    int a_distance =0,b_distance = 0;
    int ans_cnt=0;
    int arr[1000000]={};
    char prev = '0';
    for(int i = 1; i < b_cnt; i++){
        a_distance+=a_arr[i];
        b_distance+=b_arr[i];
        //cout << i << ": " << a_distance << " " << b_distance<<endl;
        if(i==1){
            if(a_distance > b_distance){
                prev = 'A';
            }else{
                prev = 'B';
            }
        }else if(a_distance > b_distance){
            if(prev == 'B'){
                ans_cnt++;
                prev= 'A';
            }
        }else if(b_distance > a_distance){
            if(prev == 'A'){
                ans_cnt++;
                prev = 'B';
            }
        }
    }
    

    cout << ans_cnt;
    return 0;
}