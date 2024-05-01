#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,v,t,a_cnt=1,b_cnt=1,a_dis=0,b_dis=0,ans_cnt=0;
    int arr_a[1000001],arr_b[1000001];
    char prev = 'a',cur;

    cin >> n >> m;

    for(int i = 0 ; i < n ;i++){
        cin >> v >> t;
        for(int j = 0; j < t; j++){
            arr_a[a_cnt++] = v;
        }
    }

    for(int i = 0; i < m; i++){
        cin >> v >> t;
        for(int j = 0; j < t; j++){
            arr_b[b_cnt++] = v;
        }
    }
   
    a_dis+= arr_a[1];
    b_dis+= arr_b[1];
    if(a_dis>b_dis){
        prev = 'a';
        ans_cnt++;
    }else if(a_dis < b_dis){
        prev = 'b';
        ans_cnt++;
    }else{
        prev = 'm';
        ans_cnt++;
    }
    for(int i = 2; i < b_cnt; i++){
        a_dis+= arr_a[i];
        b_dis+= arr_b[i];
        
        if(a_dis>b_dis){
            cur = 'a';
        }else if(a_dis < b_dis){
            cur = 'b';
        }else{
            cur = 'm';
        }

        if(cur != prev){
            ans_cnt++;
            //cout << a_dis << " " << b_dis << endl;
        }
        
    }

    cout << ans_cnt;
    return 0;
}