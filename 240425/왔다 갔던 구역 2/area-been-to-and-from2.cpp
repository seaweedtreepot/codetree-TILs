#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    int x=0;
    int current=0;
    char cur;
    int arr[2001]={};
    char prev = 'a';
    char carr[2001];
    int cnt =0;
    for(int i = 0; i < n; i++){
        cin >> x >> cur;

        if(cur == 'R'){
            while(x!=0){
                arr[current+1000]++;
                current++;
                x--;
            }
        }else{
            while(x!=0){
                current--;
                arr[current+1000]++;
                x--;
            }
        }
    }

    for(int i = 0; i < 2001; i++){
        if(arr[i]>=2){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}